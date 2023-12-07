#include "..\expressionlib\MyExpression.h"
#include <gtest.h>

TEST(TArithmeticExpressionTest, )
{

}

TEST(TArithmeticExpressionTest,right_postfix)
{
	TArithmeticExpression expression("3+4*(2-1)");
	ASSERT_EQ(expression.GetPostfix(), "3421-*+");
}

