#include<iostream>
#include "MyDB.h"
using namespace std;

int main(){
 MyDB db;  
    db.initDB("localhost", "root","", "zz");  
    db.exeSQL("select * from zw");
    db.exeSQL("delete from `zw` where name='ligaochao'");
    db.exeSQL("insert into `zw` values(default,'ligaochao','huazhongkeji',31)");  
 return 0;

}
