#ifndef _QCALCULATOR_H_
#define _QCALCULATOR_H_

#include "QCalculatorUI.h"
#include "QCalculatorDec.h"

class QCalculator
{
protected:
    QCalculatorUI* m_ui; 
	/* 
		ui �O�Ϋ��w�ӫ��V��, �]�� ui ���O�ΤG���c�y�Ӻc�y��.
		
		�p�G���@�Ӧ����ܶq�O�ϥΤG���c�y�ӧ�����, ����ϥθӦ����ܶq�����骺��,
		(ex: ���骺�� = QCalculator)�]�ݭn�ϥΤG���c�y.
	*/
    QCalculatorDec m_cal;

    QCalculator();
    bool construct();
public:
    static QCalculator* NewInstance();
    void show();
    ~QCalculator(); // �]�������ܶq���ӫ��w, �b�R�c��Ƹ̭��ݭn�N���w delete ��.
};

#endif // QCALCULATOR_H
