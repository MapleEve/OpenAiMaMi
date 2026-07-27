// module: codexmate_lib/core/debug_bundle
// addr: 0x1406d2f50
// name: sub_1406D2F50
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406D2F50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  __int128 *v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  _QWORD v15[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v16; // [rsp+70h] [rbp-10h] BYREF
  __int128 *v17; // [rsp+80h] [rbp+0h]
  __int64 (__fastcall *v18)(); // [rsp+88h] [rbp+8h]
  __int128 v19; // [rsp+90h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+20h]
  __int64 v21; // [rsp+A8h] [rbp+28h]

  v21 = -2;
  v15[0] = a4;
  v15[1] = a5;
  sub_1404F6AC0((unsigned int)&v13, a2, a4, a5, a3);
  if ( (_QWORD)v13 == -2 )
  {
    result = sub_140583D60(a2, a6, a7);
    if ( result )
    {
      *a1 = 2;
      a1[1] = result;
    }
    else
    {
      *a1 = -1;
    }
  }
  else
  {
    v20 = v14;
    v19 = v13;
    *(_QWORD *)&v16 = v15;
    *((_QWORD *)&v16 + 1) = sub_14041F680;
    v17 = &v19;
    v18 = sub_140FF2B70;
    sub_14149C0F0(&v11, &unk_141787D7C, &v16);
    v16 = v11;
    v17 = v12;
    v10 = 1;
    if ( ((unsigned __int64)v19 ^ 0x8000000000000000uLL) < 5 )
      v10 = v19 ^ 0x8000000000000000uLL;
    if ( v10 == 1 )
    {
      if ( (_QWORD)v19 != -1 && (_QWORD)v19 )
        sub_140001660(*((_QWORD *)&v19 + 1), v19, 1);
    }
    else if ( !v10 )
    {
      sub_1401DD260(*((_QWORD *)&v19 + 1));
    }
    result = (__int64)v17;
    a1[3] = v17;
    *(_OWORD *)(a1 + 1) = v16;
    *a1 = 10;
  }
  return result;
}