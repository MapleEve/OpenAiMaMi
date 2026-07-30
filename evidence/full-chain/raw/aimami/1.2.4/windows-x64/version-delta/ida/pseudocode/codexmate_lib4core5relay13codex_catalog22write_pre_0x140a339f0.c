// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog22write_pre @ 0x140a339f0
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog22write_pre | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A339F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // [rsp+28h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h]
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  _QWORD v17[6]; // [rsp+80h] [rbp+0h] BYREF

  v17[1] = -2;
  result = sub_1404B0D60(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
  }
  else
  {
    sub_1414E1440((unsigned int)&v12, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784), (unsigned int)&unk_1418135AB, 25);
    v16 = *((_QWORD *)&v12 + 1);
    result = sub_1403A8730(*((_QWORD *)&v12 + 1), v13, a3, a4);
    if ( result )
    {
      v17[0] = result;
      *(_QWORD *)&v14 = v17;
      *((_QWORD *)&v14 + 1) = sub_1414FDBC0;
      sub_141509590(&v10, &unk_14180F926, &v14);
      v14 = v10;
      v15 = v11;
      sub_14049AA50(v17[0]);
      result = v15;
      a1[3] = v15;
      *(_OWORD *)(a1 + 1) = v14;
      *a1 = 10;
      if ( (_QWORD)v12 )
        return sub_140001660(v16, v12, 1);
    }
    else
    {
      v9 = v12;
      *(_OWORD *)(a1 + 3) = v13;
      *(_OWORD *)(a1 + 1) = v9;
      *a1 = -1;
    }
  }
  return result;
}
