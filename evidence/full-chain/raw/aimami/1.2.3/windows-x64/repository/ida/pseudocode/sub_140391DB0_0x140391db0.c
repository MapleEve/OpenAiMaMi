// module: codexmate_lib/core/repository
// addr: 0x140391db0
// name: sub_140391DB0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140391DB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v7; // cl
  char v8; // al
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  _BYTE v15[176]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+50h] BYREF
  _BYTE v17[8]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v18; // [rsp+E0h] [rbp+60h]
  __int128 v19; // [rsp+E8h] [rbp+68h]
  __int64 v20; // [rsp+F8h] [rbp+78h]
  __int64 v21; // [rsp+100h] [rbp+80h]
  __int64 v22; // [rsp+110h] [rbp+90h]
  __int64 v23; // [rsp+118h] [rbp+98h]
  __int64 v24; // [rsp+128h] [rbp+A8h]
  __int64 v25; // [rsp+130h] [rbp+B0h]
  __int64 v26; // [rsp+140h] [rbp+C0h]
  __int64 v27; // [rsp+148h] [rbp+C8h]
  __int128 v28; // [rsp+180h] [rbp+100h]
  __int64 v29; // [rsp+198h] [rbp+118h]
  __int64 v30; // [rsp+1A0h] [rbp+120h]

  v30 = -2;
  sub_1403C9010(&v16, a2, a3);
  if ( v16 == -2 )
  {
    result = sub_14034ED40(v17);
    *(_QWORD *)a1 = -1;
    *(_BYTE *)(a1 + 24) = 0;
    return result;
  }
  sub_141684120(v15, &v16, 176);
  if ( !(unsigned __int8)sub_1403CCAD0(v15) )
  {
    v8 = sub_1403C9270(v15);
    v7 = 1;
    if ( v8 )
      goto LABEL_6;
    if ( (unsigned __int8)sub_1403CBE70(v15) )
    {
      sub_1403C9DD0(&v16, v15, a2, a3);
      if ( (_DWORD)v16 == 2 )
      {
        sub_14034ED40(v17);
        v9 = -1;
LABEL_17:
        *(_QWORD *)a1 = v9;
        *(_OWORD *)(a1 + 8) = v28;
        *(_BYTE *)(a1 + 24) = 0;
        return sub_14034E960(v15);
      }
      v9 = v18;
      v28 = v19;
      v10 = v22;
      v11 = v23;
      v12 = v24;
      v13 = v25;
      v14 = v26;
      v29 = v27;
      if ( v20 )
        sub_140001660(v21, v20, 1);
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_140001660(v11, v10, 1);
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_15:
          if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_17;
LABEL_16:
          sub_140001660(v29, v14, 1);
          goto LABEL_17;
        }
      }
      else if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
        goto LABEL_15;
      }
      sub_140001660(v13, v12, 1);
      if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_17;
      goto LABEL_16;
    }
  }
  v7 = 0;
LABEL_6:
  *(_QWORD *)a1 = -1;
  *(_BYTE *)(a1 + 24) = v7;
  return sub_14034E960(v15);
}