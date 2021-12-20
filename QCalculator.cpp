#include "QCalculator.h"

QCalculator::QCalculator()
{
}

bool QCalculator::construct()
{
    m_ui = QCalculatorUI::NewInstance();

    if( m_ui != NULL )
    {
        m_ui->setCalculator(&m_cal); 
		/* 
			�ѩ��k����{�F���f, �]�����N�O�@�ӱ��f��H,
			�o��N�X�N ui �P�֤ߺ�k���p�b�@�_. 
			
			�o�ˤl�����p�O�q�L���f�i�檺, �q�N�X�W���Ӭ�, QCalculatorUI �P QCalculatorDec �èS�����������ͤ������Y,
			�o�N�O�D�`�㦳�ޥ��M���N�ʪ��a��.
			
		*/
    }

    return (m_ui != NULL);
}

QCalculator* QCalculator::NewInstance()
{
    QCalculator* ret = new QCalculator();

    if( (ret == NULL) || !ret->construct() )
    {
        delete ret;
        ret = NULL;
    }

    return ret;
}


void QCalculator::show()
{
    m_ui->show();
}

QCalculator::~QCalculator()
{
    delete m_ui;
}
