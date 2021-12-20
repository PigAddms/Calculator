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
			由於算法類實現了接口, 因此它就是一個接口對象,
			這行代碼將 ui 與核心算法關聯在一起. 
			
			這樣子的關聯是通過接口進行的, 從代碼上面來看, QCalculatorUI 與 QCalculatorDec 並沒有直接的產生什麼關係,
			這就是非常具有技巧和藝術性的地方.
			
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
