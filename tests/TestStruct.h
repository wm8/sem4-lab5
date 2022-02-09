// Copyright 2022 wm8

#ifndef LAB5_TESTSTRUCT_H
#define LAB5_TESTSTRUCT_H
struct TestStruct
{
  TestStruct() {}
  explicit TestStruct(int _id) {id = _id;}
  TestStruct(TestStruct* pStruct) {
    this->id = pStruct->id;
    this->name = pStruct->name;
  }
  int id;
  char* name= nullptr;
};
#endif  // LAB5_TESTSTRUCT_H
