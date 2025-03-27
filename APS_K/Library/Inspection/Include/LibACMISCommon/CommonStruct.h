#pragma once

#include "LibACMISCommon/CommonEnum.h"
#include "LibACMISCommon/DataTypes.h"

#include <atlstr.h>
#include <vector>

struct TDATASPEC
{
	EOUTMODE eOutMode;
	EDATAFORMAT eDataFormat;
	ESENSORTYPE eSensorType;
	EDEMOSAICMETHOD eDemosaicMethod;
	int nBlackLevel;
};

struct TBufferInfo
{
	BYTE* pBuffer;
	int nImageWidth;
	int nImageHeight;
	int nUsing8BitOnly;
	int nPartialDemosaic;
	TDATASPEC tDataSpec;
};

struct TBufferInfoM
{
	BYTE** pBuffer;
	int nBufferCount;
	int nImageWidth;
	int nImageHeight;
	int nUsing8BitOnly;
	int nPartialDemosaic;
	TDATASPEC tDataSpec;
};

struct TFileInfo
{
	char* strFileName;
	bool bIsRaw;
	int nImageWidth;
	int nImageHeight;
	int nUsing8BitOnly;
	int nPartialDemosaic;
	TDATASPEC tDataSpec;
};

struct TFileInfoM
{
	char** strFileName;
	bool bIsRaw;
	int nFileCount;
	int nImageWidth;
	int nImageHeight;
	int nUsing8BitOnly;
	int nPartialDemosaic;
	TDATASPEC tDataSpec;
};

struct TColorRatio
{
	double RG;
	double BG;
	double GrGb;
	double GrG;
	double GbG;
	double R;
	double G;
	double B;
	double Gr;
	double Gb;
	TColorRatio(double _RG = 0.0, double _BG = 0.0, double _GrGb = 0.0, double _GrG = 0.0, 
		        double _GbG = 0.0, double _R = 0.0, double _G = 0.0, double _B = 0.0)
		: RG(_RG), BG(_BG), GrGb(_GrGb), GrG(_GrG), GbG(_GbG), R(_R), G(_G), B(_B), Gr(_G), Gb(_G) {}
};

struct TColorReproduction
{
	double L;
	double a;
	double b;
};
using TColorLab = TColorReproduction;

struct TROIPoint
{
	POINT ptCenter;
	LONG nROIWidth;
	LONG nROIHeight;
};
using TROICPoint = TROIPoint;

struct TROISPoint
{
	POINT ptStart;
	LONG nROIWidth;
	LONG nROIHeight;
};

struct TROIField
{
	float fHorField;
	float fVerField;
	LONG nROIWidth;
	LONG nROIHeight;
};

struct TROIDataCommon
{
	EROIType eROIType;
	float fData[4];
};

struct TROIData
{
	double* dOffset;
	EROIType eROIType;
	int ROICount;
	void* pROIData;
};

struct TInspectRegionOffset
{
	int nStartOffsetX;
	int nStartOffsetY;
	int nEndOffsetX;
	int nEndOffsetY;
};

// �Է� Image Info
struct INSPECTION_IMAGE_INFO
{
	std::vector<int> vImageIndex;
	std::vector<int> vImageType;
	int nUsing8BitOnly;
	int nPartialDemosaic;
	TDATASPEC tDataSpec;
	EImageFormat eImageFormat;
};

// �Է� ����ü
struct INSPECTION_INPUT
{
	AlgorithmTestItem enAlgorithmType;
	INSPECTION_IMAGE_INFO tImageInfo;
	void* pSpec;
	void* pSpecExtra;
	TROIData* pROI;
};

// ��� ����ü - ����
struct INSPECTION_RESULT
{
	AlgorithmTestItem enAlgorithmType;
	std::string strVersion;
	std::vector<std::string> vStrLogHeader;
	std::vector<std::string> vStrLogData;
	std::vector<int> vResultCode;
	int nElapsedTime;
	void* pInspectionResult;
};

struct TCircleData
{
	double dOcx;	// Ÿ���� x �߽�
	double dOcy;	// Ÿ���� y �߽�
	double dRadx;	// Ÿ���� x ���� ������
	double dRady;	// Ÿ���� y ���� ������
	double dAngle;	// Ÿ���� ������ ����
};

struct TCircleSpecN
{
	bool bEnableCircle;			// Ÿ�� ���� Ȱ��ȭ ����
	int nUsedFixedCircle;		// ���� ��ǥ ���� ������� ����
								// - 0: �̹������� opencv�� �̿��ؼ� ���� Ÿ�� ã��
								// - 1: Horizontal ���� 1.0F ��(r = w/2)
								// - 2: MTM (�̻��)
								// - 3: Diagonal ���� 1.0F ��(r = d, d^2 = (w/2)^2 + (h/2)^2)
	// ���� ã�� ��(nUsedFixedCircle == 0) ���
	int nPosOffsetX;			// �̹��� �¿� ���� margin
	int nPosOffsetY;			// �̹��� ���� ���� margin
	double dThresholdRatio;		// �̹��� ����ȭ threshold
	double dROIRange;			// �̹��� �߽� ���� margin ����
	// ���� ���� �������� scale�� �� ���
	double dRadiusRatioX;		// Ÿ���� x ���� ������ scaler
	double dRadiusRatioY;		// Ƽ���� y ���� ������ scaler
};

struct TCircleSpecCommon
{
	int nEnableCircle;
	int nCommonUsedFixedCircle;
	double dCommonRadiusRatioX;
	double dCommonRadiusRatioY;
	int nDetectPosOffsetX;
	int nDetectPosOffsetY;
	double dDetectThresholdRatio;
	double dDetectROIRange;
	double  dMultiZoneSizeRatio[3];
	double	dMultiThreshold[3];
};

struct TFiducialMarkType
{
	CDPoint ptFiducialMarkPoint;
	int nFiducialMarkShape; // EFiducialMarkShape
};

struct TFiducialMarkUse
{
	TFiducialMarkType tFiducialMarkType;
	int nInspectItem;
};

struct THarrisCornerPoint
{
	POINT ptCorner;
	double dValue;
	int nPatchIndex;
};

struct TPatchInfo
{
	RECT rtROI;
	POINT ptCenter;
	POINT ptStartVertex;
	double dMinPatchSize;
	double dMaxPatchSize;
	double dBinaryThreshold;
	double dAvgBrightThreshold;
	int nPatchShape;
	int nVertexCount;
	int nPatchColor;
	int nMinDistance;
	int nSeparateLevel;
	int nPatchPos;
	bool bSeparate;
};

struct TPatchSize
{
	int nArea;
	int nLeft;
	int nTop;
	int nWidth;
	int nHeight;
};

struct TInspectROIData
{
	unsigned int nVersion;
	int nMaxROIFlagCount;
	float fROIFlag[20]; 
	/* 
	0: ROI type, 
	1 ~ 4: ROI data, 
	5: Offset, 
	6: Min Threshold, 
	7: Max Threshold, 
	8 ~ : Variable for each algorithm 
	*/
};

struct TInspectSpec
{
	unsigned int nVersion;
	int nROICount;
	TInspectROIData* tROI;
	int nMaxSpecFlagCount;
	float fSpecFlag[100];
	int nMaxEtcFlagCount;
	float fEtcFlag[10];
	TInspectRegionOffset tInspectRegionOffset;
	float fCircleSpec[CIRCLE_COMMON_FLAG_MAX_COUNT]; /* TCircleSpecCommon */
};

struct TInspectResult
{
	unsigned int nVersion;
	int nROICount;
	TInspectROIData* tROI;
	int nMaxResultCount;
	float fResult[100];
};