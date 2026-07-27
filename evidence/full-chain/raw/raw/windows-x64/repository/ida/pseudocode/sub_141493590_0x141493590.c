// module: codexmate_lib/core/repository
// addr: 0x141493590
// name: sub_141493590
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_141493590(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _BYTE v5[584]; // [rsp+20h] [rbp-60h] BYREF
  int v6; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v7; // [rsp+270h] [rbp+1F0h]
  __int64 v8; // [rsp+278h] [rbp+1F8h]
  _BYTE v9[608]; // [rsp+280h] [rbp+200h] BYREF

  sub_141490570(&v6);
  if ( v6 == 1 )
  {
    v2 = v7;
    v3 = v8;
    if ( v7 )
      sub_141684120(v5, v9, 584);
    a1[1] = v2;
    a1[2] = v3;
    sub_141684120(a1 + 3, v5, 584);
    *a1 = 1;
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}