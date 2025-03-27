
// DioControl.h : 


#pragma once

#include "stdafx.h"

#if (__MACHINE_MODEL == MACHINE_1ST)

#define		DIO_IN_EMERGENCY1						0x00000001		//!  1) 
#define		DIO_IN______TEMP2						0x00000002		//!  2) 
#define		DIO_IN_START							0x00000004		//!  3) 
#define		DIO_IN_DOOR_PB							0x00000008		//!  4) 
#define		DIO_IN______TEMP5						0x00000010		//!  5) 
#define		DIO_IN_PCB_PUSH_BACK					0x00000020		//!  6) pcb ���� ���� 
#define     DIO_IN_PCB_PUSH_FOR						0x00000040		//!  7) pcb ���� ���� 
#define     DIO_IN_LENS_GRIP_BACK					0x00000080		//!  8) lens ���� ����
#define		DIO_IN_LENS_GRIP_FOR					0x00000100		//!  9) lens ���� ����
#define		DIO_IN_PCB_RETURN						0x00000200		//! 10) pcb return ����
#define		DIO_IN_PCB_TURN							0x00000400		//! 11) pcb turn ����
#define		DIO_IN______TEMP12						0x00000800		//! 12)  
#define		DIO_IN______TEMP13						0x00001000		//! 13)
#define     DIO_IN_LASER_CYLINDER_DOWN				0x00002000		//! 14) 
#define     DIO_IN_LASER_CYLINDER_UP				0x00004000		//! 15) 
#define     DIO_IN______TEMP16						0x00008000		//! 16) 
#define		DIO_IN_DOORSENSOR1						0x00010000		//! 17) 
#define		DIO_IN_DOORSENSOR2						0x00020000		//! 18) 
#define     DIO_IN_DOORSENSOR3						0x00040000		//! 19) 
#define     DIO_IN_DOORSENSOR4						0x00080000		//! 20) 
#define     DIO_IN_DOORSENSOR5						0x00100000		//! 21) 

#define		DIO_IN_DOORSENSOR6						0x00200000		//! 22) 
#define		DIO_IN_DOORSENSOR7						0x00400000		//! 23) 
#define		DIO_IN_DOORSENSOR8						0x00800000		//! 24) 
#define     DIO_IN______TEMP25						0x01000000		//! 25) 
#define		DIO_IN______TEMP26						0x02000000		//! 26) 
#define		DIO_IN_TAIL_UN_GRIP						0x04000000		//! 27) 
#define		DIO_IN_CONTACT_UP						0x08000000		//! 28) 
#define		DIO_IN_CONTACT_DOWN						0x10000000		//! 29) 
#define		DIO_IN_TAIL_GRIP						0x20000000		//! 30) 
#define     DIO_IN_UV_CYLINDER_DOWN					0x40000000		//! 31) UV Cylinder Down ����
#define		DIO_IN_UV_CYLINDER_UP					0x80000000		//! 32)  UV Cylinder UP ����


//1�� DIO
#define		DIO_IN_PCBSTAGE_GRIP_FOR			0x00000001		//!  1) 
#define		DIO_IN_PCBSTAGE_GRIP_BACK			0x00000002		//!  2) 
#define		DIO_IN______2TEMP3					0x00000004		//!  3) 
#define		DIO_IN______2TEMP4					0x00000008		//!  4) 
#define		DIO_IN______2TEMP5					0x00000010		//!  5) 
#define		DIO_IN______2TEMP6					0x00000020		//!  6) 
#define		DIO_IN______2TEMP7					0x00000040		//!  7) 
#define		DIO_IN______2TEMP8					0x00000080		//!  8) 
#define		DIO_IN______2TEMP9					0x00000100		//!  9) 
#define		DIO_IN______2TEMP10					0x00000200		//! 10) 
#define		DIO_IN______2TEMP11					0x00000400		//! 11) 
#define		DIO_IN______2TEMP12					0x00000800		//! 12) 
#define		DIO_IN______2TEMP13					0x00001000		//! 13) 
#define		DIO_IN______2TEMP14					0x00002000		//! 14) 
#define		DIO_IN______2TEMP15					0x00004000		//! 15) 
#define		DIO_IN______2TEMP16					0x00008000		//! 16) 
#define		DIO_IN______2TEMP18					0x00010000		//! 17)
#define		DIO_IN______2TEMP19					0x00020000		//! 18) 
#define     DIO_IN______2TEMP20					0x00040000		//! 19) 
#define     DIO_IN______2TEMP21					0x00080000		//! 20) 
#define     DIO_IN______2TEMP22					0x00100000		//! 21) 
#define     DIO_IN______2TEMP23					0x00200000		//! 22) 
#define		DIO_IN______2TEMP24					0x01000000		//! 25) 
#define     DIO_IN______2TEMP25					0x02000000		//! 26) 
#define		DIO_IN______2TEMP26					0x04000000		//! 27) 
#define		DIO_IN______2TEMP27					0x08000000		//! 28) 
#define		DIO_IN______2TEMP28					0x10000000		//! 27) 
#define		DIO_IN______2TEMP29					0x20000000		//! 28) 
#define    	DIO_IN______2TEMP30					0x40000000		//! 31) 
#define		DIO_IN______2TEMP31					0x80000000		//! 32)




//�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�
//�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�
///////////////// DIO Output DEFINE /////////////////
//0�� ���

//!---------- Channel 0
//0��
#define		DIO_OUT_TOWER_LAMP_Y					0x01		//!  1) LAMP Y
#define		DIO_OUT_TOWER_LAMP_G					0x02		//!  2) LAMP G
#define		DIO_OUT_TOWER_LAMP_R					0x04		//!  3) LAMP R
#define		DIO_OUT_TOWER_LAMP_BUZZER				0x08		//!  4) Tower BUZZER
#define     DIO_OUT_BUZZER1							0x10		//!  5) BUZZER1
#define     DIO_OUT_BUZZER2							0x20		//!  6) BUZZER2
#define     DIO_OUT_BUZZER3							0x40		//!  7) BUZZER3
#define     DIO_OUT_BUZZER4							0x80		//!  8) BUZZER4
//
#define		DIO_OUT_SPARE9							0x01		//!  9) 
#define		DIO_OUT_PCB_CONTACT_DOWN				0x02		//! 10) PCB �ϰ�
#define		DIO_OUT_PCB_CONTACT_UP					0x04		//! 11) PCB ���
#define		DIO_OUT_LENS_GRIP_BACK					0x08		//! 12) LENS GRIP ����
#define		DIO_OUT_LENS_GRIP_FOR					0x10		//! 13) LENS GRIP ����
#define		DIO_OUT_PCB_GRIP_BACK					0x20		//! 14) PCB GRIP ���� 
#define		DIO_OUT_PCB_GRIP_FOR					0x40		//! 15) PCB GRIP ���� 
#define		DIO_OUT_EPOXY_ON2						0x80		//! 16) EPOXY ON
//-----------------------------------------------------------------------------
#define		DIO_OUT_LASER_CYLINDER_UP				0x01		//! 17) 
#define		DIO_OUT_LASER_CYLINDER_DOWN				0x02		//! 18) 
#define		DIO_OUT_SPARE12							0x04		//! 19) 
#define		DIO_OUT_START_PB						0x08		//! 20) 
#define		DIO_OUT_DOOR_PB							0x10		//! 21) 
#define		DIO_OUT_SPARE13							0x20		//! 22) 
#define		DIO_OUT_PCB_TURN						0x40		//! 23) PCB TURN
#define		DIO_OUT_PCB_RETURN						0x80		//! 24) PCB RETURN 

#define		DIO_OUT_SPARE250						0x01		//! 25) 
#define		DIO_OUT_TAIL_UN_GRIP					0x02		//! 26) 
#define		DIO_OUT_TAIL_GRIP						0x04		//! 27) 
#define		DIO_OUT_SPARE19							0x08		//! 28)Laser Cylinder Down ���
#define		DIO_OUT_SPARE20							0x10		//! 29)Laser Cylinder Up ���
#define		DIO_OUT_VACUUM_SOL						0x20		//! 30)
#define		DIO_OUT_EPOXY_ON						0x40		//! 31) 
#define		DIO_OUT_UV_ON							0x80		//! 32) 

//


//2�� ���
//
//! Channel 0
#define		DIO_OUT_PCBSTAGE_GRIP_BACK		0x01		//!  1) HOLDER GRIP ����
#define		DIO_OUT_PCBSTAGE_GRIP_FOR		0x02		//!  2) HOLDER GRIP ����
#define		DIO_OUT_SPARE201				0x04		//!  3) DOOR CLOSE
#define		DIO_OUT_SPARE202				0x08		//!  4) DOOR OPEN
#define		DIO_OUT_SPARE203				0x10		//!  5) LENS GRIP ����
#define		DIO_OUT_SPARE204				0x20		//!  6) LENS GRIP ����
#define		DIO_OUT_CONTACT_UP				0x40		//!  7) LENS ALIGN CHUCK ����
#define		DIO_OUT_CONTACT_DOWN			0x80		//!  8) LENS ALIGN CHUCK ����

//! Channel 1
#define		DIO_OUT_SPARE210				0x01		//!  9) �˻� FEED ����
#define		DIO_OUT_SPARE211				0x02		//! 10) �˻� FEED ����
#define		DIO_OUT_SPARE212				0x04		//! 11) DARK CAP PUSHER ���
#define		DIO_OUT_SPARE222				0x08		//! 12) DARK CAP PUSHER �ϰ�
#define		DIO_OUT_SPARE223				0x10		//! 13) �������
#define		DIO_OUT_SPARE224				0x20		//! 14) �������
#define		DIO_OUT_SPARE25					0x40		//! 15) �������
#define		DIO_OUT_SPARE26					0x80		//! 16) �������
//! Channel 2
#define		DIO_OUT_SPARE27					0x01		//! 17) START PB
#define		DIO_OUT_SPARE28					0x02		//! 18) DOOR PB
#define		DIO_OUT_SPARE290				0x04		//! 19) �������
#define		DIO_OUT_SPARE30					0x08		//! 20) �������
#define		DIO_OUT_SPARE31					0x10		//! 21) �������
#define		DIO_OUT_SPARE32					0x20		//! 22) �������
#define		DIO_OUT_SPARE33					0x40		//! 23) �������
#define     DIO_OUT_SPARE34					0x80		//!	24) �������
//
//! Channel 3
#define		DIO_OUT_SPARE35					0x01		//!	25) �������
#define		DIO_OUT_SPARE36					0x02		//!	26) �������
#define		DIO_OUT_SPARE37					0x04		//!	27) �������
#define		DIO_OUT_SPARE38					0x08		//!	28) �������
#define		DIO_OUT_SPARE39					0x10		//!	29) �������
#define		DIO_OUT_SPARE40					0x20		//!	30) �������
#define		DIO_OUT_SPARE41					0x40		//!	31) �������
#define		DIO_OUT_SPARE42					0x80		//!	32) �������

#else
//DIO INPUT

#define		DIO_IN______TEMP1						0x00000001		//!  1) 
#define		DIO_IN_START							0x00000002		//!  2) 
#define		DIO_IN_EMERGENCY1						0x00000004		//!  3) 
#define		DIO_IN______TEMP4						0x00000008		//!  4) 
#define		DIO_IN______TEMP5						0x00000010		//!  5) 
#define		DIO_IN______TEMP6						0x00000020		//!  6) 
#define     DIO_IN______TEMP7						0x00000040		//!  7) 
#define     DIO_IN______TEMP8						0x00000080		//!  8) 
#define		DIO_IN_LENS_GRIP_BACK					0x00000100		//!  9) 
#define		DIO_IN_LENS_GRIP_FOR					0x00000200		//! 10) 
#define		DIO_IN______TEMP11						0x00000400		//! 11) 
#define		DIO_IN______TEMP12						0x00000800		//! 12)  
#define		DIO_IN______TEMP13						0x00001000		//! 13)
#define     DIO_IN______TEMP14						0x00002000		//! 14) 
#define     DIO_IN______TEMP15						0x00004000		//! 15) 
#define     DIO_IN______TEMP16						0x00008000		//! 16) 
#define		DIO_IN______TEMP17						0x00010000		//! 17) 
#define		DIO_IN______TEMP18						0x00020000		//! 18) 
#define     DIO_IN______TEMP19						0x00040000		//! 19) 
#define     DIO_IN______TEMP20						0x00080000		//! 20) 
#define     DIO_IN______TEMP21						0x00100000		//! 21) 
#define		DIO_IN______TEMP22						0x00200000		//! 22) 
#define		DIO_IN______TEMP23						0x00400000		//! 23) 
#define		DIO_IN______TEMP24						0x00800000		//! 24) 
#define     DIO_IN______TEMP25						0x01000000		//! 25) 
#define		DIO_IN______TEMP26						0x02000000		//! 26) Laser Cylinder Down ����
#define		DIO_IN______TEMP27						0x04000000		//! 27) Laser Cylinder Up ����
#define		DIO_IN______TEMP28						0x08000000		//! 28) 
#define		DIO_IN______TEMP29						0x10000000		//! 29) 
#define		DIO_IN______TEMP30						0x20000000		//! 30) 
#define     DIO_IN______TEMP31						0x40000000		//! 31) UV Cylinder Down ����
#define		DIO_IN______TEMP32						0x80000000		//! 32)  UV Cylinder UP ����


//1�� DIO
#define		DIO_IN______2TEMP1					0x00000001		//!  1) 
#define		DIO_IN______2TEMP2					0x00000002		//!  2) 
#define		DIO_IN______2TEMP3					0x00000004		//!  3) 
#define		DIO_IN______2TEMP4					0x00000008		//!  4) 
#define		DIO_IN______2TEMP5					0x00000010		//!  5) 
#define		DIO_IN______2TEMP6					0x00000020		//!  6) 
#define		DIO_IN______2TEMP7					0x00000040		//!  7) 
#define		DIO_IN______2TEMP8					0x00000080		//!  8) 
#define		DIO_IN______2TEMP9					0x00000100		//!  9) 
#define		DIO_IN______2TEMP10					0x00000200		//! 10) 
#define		DIO_IN______2TEMP11					0x00000400		//! 11) 
#define		DIO_IN______2TEMP12					0x00000800		//! 12) 
#define		DIO_IN______2TEMP13					0x00001000		//! 13) 
#define		DIO_IN______2TEMP14					0x00002000		//! 14) 
#define		DIO_IN______2TEMP15					0x00004000		//! 15) 
#define		DIO_IN______2TEMP16					0x00008000		//! 16) 
//#define		DIO_IN______2TEMP18					0x00010000		//! 17)
//#define		DIO_IN______2TEMP19					0x00020000		//! 18) 
//#define     DIO_IN______2TEMP20					0x00040000		//! 19) 
//#define     DIO_IN______2TEMP21					0x00080000		//! 20) 
//#define     DIO_IN______2TEMP22					0x00100000		//! 21) 
//#define     DIO_IN______2TEMP23					0x00200000		//! 22) 
//#define		DIO_IN______2TEMP24					0x01000000		//! 25) 
//#define     DIO_IN______2TEMP25					0x02000000		//! 26) 
//#define		DIO_IN______2TEMP26					0x04000000		//! 27) 
//#define		DIO_IN______2TEMP27					0x08000000		//! 28) 
//#define		DIO_IN______2TEMP28					0x10000000		//! 27) 
//#define		DIO_IN______2TEMP29					0x20000000		//! 28) 
//#define    	DIO_IN______2TEMP30					0x40000000		//! 31) 
//#define		DIO_IN______2TEMP31					0x80000000		//! 32)




//�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�
//�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�
///////////////// DIO Output DEFINE /////////////////
//0�� ���

//!---------- Channel 0
	//0��
#define		DIO_OUT_SPARE1							0x01		//!  1) LAMP Y
#define		DIO_OUT_START_PB						0x02		//!  2) LAMP G
#define		DIO_OUT_SPARE3							0x04		//!  3) LAMP R
#define		DIO_OUT_SPARE4							0x08		//!  4) Tower BUZZER
#define     DIO_OUT_SPARE5							0x10		//!  5) BUZZER1
#define     DIO_OUT_SPARE6							0x20		//!  6) BUZZER2
#define     DIO_OUT_VACUUM_ON						0x40		//!  7) BUZZER3
#define     DIO_OUT_VACUUM_OFF						0x80		//!  8) BUZZER4
//
#define		DIO_OUT_LENS_GRIP_BACK					0x01		//!  9) 
#define		DIO_OUT_LENS_GRIP_FOR					0x02		//! 10) PCB �ϰ�
#define		DIO_OUT_SPARE11							0x04		//! 11) PCB ���
#define		DIO_OUT_SPARE12							0x08		//! 12) LENS GRIP ����
#define		DIO_OUT_SPARE13							0x10		//! 13) LENS GRIP ����
#define		DIO_OUT_SPARE14							0x20		//! 14) PCB GRIP ���� 
#define		DIO_OUT_EPOXY_ON						0x40		//! 15) PCB GRIP ���� 
#define		DIO_OUT_SPARE16							0x80		//! 16) EPOXY ON




#endif

//�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�
//�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�
//�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�


class CDioControl
{
public:
	CDioControl();

	CCriticalSection	g_CriOutDio;

public:

	bool PcbGrip(bool flag, bool waitFlag = true);				//PCBGRIP
	bool PcbGripCheck(bool flag, bool waitFlag = true);			//PCBUNGRIP
	//
	bool LensMotorGrip(bool flag, bool waitFlag = true);		//! Lens Gripper ����/����
	bool LensMotorGripCheck(bool flag, bool waitFlag = true);	//! Lens Gripper ����/���� ����

	bool LensTailGrip(bool flag, bool waitFlag = true);		// 1ȣ��
	bool LensTailGripCheck(bool flag, bool waitFlag = true);	// 1ȣ��
	//
	//bool PcbTurn(bool flag, bool waitFlag = true);				//PCBGRIP
	//bool PcbTurnCheck(bool flag, bool waitFlag = true);			//PCBUNGRIP
	//
	//bool ContactUpDown(bool flag, bool waitFlag);//sMini �� ���� ���� ���� ���ٿ�
	//bool ContactUpDownCheck(bool flag, bool waitFlag);
	//
	//bool UVCylinder_UPDOWN(bool flag, bool waitFlag = true);			//UV Cylinder UP
	//bool UVCylinderCheck(bool flag, bool waitFlag = true);		//UV Cylinder DOWN
	//
	bool LaserCylinderUPDOWN(bool flag, bool waitFlag = true);		//Laser Cylinder UP DOWN
	bool LaserCylinderCheck(bool flag, bool waitFlag = true);		//Laser Cylinder Check
	//








public:
	//bool OcSlinderMove(bool flag, bool waitFlag);
	//bool OcSlinderCheck(bool flag, bool waitFlag);

	//Cam, Laser �Ǹ��� ��,����
	//bool CamLaserSlinderMove(bool flag, bool waitFlag = true);
	//Cam, Laser �Ǹ��� ���� Ȯ��
	//bool CamLaserSlinderCheck(bool flag, bool waitFlag = true);

	//Conti ���� ���� �׸�
	bool ContiTailGrip(bool flag, bool waitFlag = true);
	//Conti ���� ���� �׸� ���� Ȯ��
	bool ContiTailGripCheck(bool flag, bool waitFlag = true);

	

	//! pcb Grip ����/����
	//bool LensLift(bool flag, bool waitFlag = true);
	//! Lens Lift ���/�ϰ� ����
	//bool LensLiftCheck(bool flag, bool waitFlag = true);
	
	//! PCB ���� ���� ����
	bool LensOnCheck(bool flag, bool waitFlag=true);

	//! PCB Cover ����/����
	bool PCBPush(bool flag, bool waitFlag = true);		//-- ������(���� ����)
	//! PCB Cover ����/���� ����
	bool PCBPushCheck(bool flag, bool waitFlag = true);	//-- ������(���� ����)

	//bool PCBCoverCloseCheck(bool flag, bool waitFlag = true);	//PCB Ŀ�� Ŭ������ �������� T=����Ȯ��, F=����Ȯ��

	
	//bool PCBDark(bool flag, bool waitFlag = true);					//! PCB Dark ���/�ϰ�
	//bool PCBDarkCheck(bool flag, bool waitFlag = true);				//! PCB Dark ���/�ϰ� ����

	//! PCB ����/Ż��
	bool PCBvaccumOn(int flag, bool waitFlag = true);				// 0:OFF, 1:����, 2:Ż��..
	//! PCB ���� ����
	bool PCBvaccumOnCheck(bool flag, bool waitFlag = true);			// ������ Ȯ�� ����..

	
	bool BackLightOn(bool flag, bool waitFlag = true);				//! ��� ���� �ϰ�/���
	bool BackLightOnCheck(bool flag, bool waitFlag = true);			//! ��� ���� �ϰ�/��� ���� Ȯ��

	//! Start P/B ����ġ ����
	bool StartPBOnCheck(bool flag, bool waitFlag = true);
	bool StartPBLampOn(bool flag);

	//! Door Open/Close
	bool DoorPBOnCheck(bool flag, bool waitFlag = true);
	bool DoorPBLampOn(bool flag);
	bool DoorLift(bool flag, bool waitflag = true); 
	bool DoorLiftOnCheck(bool flag, bool waitflag = true);

	//! ���� ���� ����(Ŀư)
	bool LightCurtainOnCheck(bool flag, bool waitFlag = true);	

	bool LensVacuumOn(bool flag);
	//! ����
	bool EpoxyDischargeOn(bool flag, bool waitFlag = true);			//Dispence ���� On/Off 
	bool EpoxyDischargeOnCheck(bool flag, bool waitFlag = true);	//Dispence ������ Check

		//! 20150603 ���� I/O �߰�
	bool EpoxyDischargeOn2(bool flag, bool waitFlag = true);			//Dispence ���� On/Off 
	bool EpoxyDischargeOnCheck2(bool flag, bool waitFlag = true);	//Dispence ������ Check

	bool UVTrigger(bool flag, bool waitFlag = true);
	bool UVCheck(bool flag, bool waitFlag = true);

	int SensorContactCheck();

	void setAlarm(int AlarmNo);			//0: �˶� + Red Lamp On 1: Yellow Lamp 2: Green Lamp
	
	void SetLampOn(int iType);			//enum LAMP_NO { ALARM_ON, ALARM_OFF, AUTO_STOP, AUTO_RUN};
	void SetBuzzer(bool flag, int iType);		

	

	//bool CamLaserClinder(bool flag, bool waitFlag = true);					//! PCB Dark ���/�ϰ�
	//bool CamLaserClinderCheck(bool flag, bool waitFlag = true);				//! PCB Dark ���/�ϰ� ����

	bool VacuumSol(bool flag, bool waitFlag = true); //! Vacuum �ı�

	bool Relay(bool flag, bool waitFlag = true); //! ������
};
