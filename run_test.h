
#ifndef RUNTEST_H
#define RUNTEST_H


extern size_t thread_cnt;
extern void Init();
extern void StartStress();
extern void CreateTable(int);
extern void DropTable();
extern void Insert();
extern void Delete();

#endif
