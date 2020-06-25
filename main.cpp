//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

//   如果数据足够大，会突破float的界限，即使没有突破界限，有可能会变更成科学计数法
//    float floating_point_value = 88888888888.88;
    float floating_point_value = 8888888888.88888888888;

//    日常经验：即使是科学计算，使用double一般精确足够
    double double_value = 8888888888.88888888888;

//    但是，一旦跟金融有关，尽量使用更加精确的储存
    long double long_double_value = 8888888888.88888888888;



//    通常写法，无法控制是否转换科学技术
//    cout << floating_point_value << endl;

//    但是数据会变！
//    cout << fixed << floating_point_value << endl;

//    所以我们可以看看float储存数据的大小
//    cout << sizeof(float) << endl;
    cout << "The size if float is :" << sizeof(floating_point_value) << endl;
    cout << setprecision(50) << fixed << floating_point_value << endl;
    cout << "The size if double is :" << sizeof(double_value) << endl;
    cout << setprecision(50) << fixed << double_value << endl;
    cout << "The size if long double is :" << sizeof(long_double_value) << endl;
    cout << setprecision(50) << fixed << long_double_value << endl;
//    精确度对比


    return 0;
}