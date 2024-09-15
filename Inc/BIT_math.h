#ifndef BIT_MATH_H
#define BIT_MATH_H

#define BIT_MASK 1
#define SET_BIT(REG,BIT_NUM)    (REG |= (BIT_MASK <<BIT_NUM))
#define CLEAR_BIT(REG,BIT_NUM)  (REG &= ~(BIT_MASK <<BIT_NUM))
#define TOGGLE_BIT(REG,BIT_NUM) (REG ^= (BIT_MASK <<BIT_NUM))
#define READ_BIT(REG,BIT_NUM)  ((REG >> BIT_NUM) & BIT_MASK)

#endif
