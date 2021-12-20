#ifndef _QCALCULATOR_H_
#define _QCALCULATOR_H_

#include "QCalculatorUI.h"
#include "QCalculatorDec.h"

class QCalculator
{
protected:
    QCalculatorUI* m_ui; 
	/* 
		ui 是用指針來指向的, 因為 ui 類是用二階構造來構造的.
		
		如果有一個成員變量是使用二階構造來完成的, 那麼使用該成員變量的整體的類,
		(ex: 整體的類 = QCalculator)也需要使用二階構造.
	*/
    QCalculatorDec m_cal;

    QCalculator();
    bool construct();
public:
    static QCalculator* NewInstance();
    void show();
    ~QCalculator(); // 因為成員變量有個指針, 在析構函數裡面需要將指針 delete 掉.
};

#endif // QCALCULATOR_H
