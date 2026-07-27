// module: codexmate_lib/core/voice/workspace
// addr: 0x1407ae080
// name: serialize_2
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceWorkspacePayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_2(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // r14
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-48h] BYREF
  char v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  __int128 v17; // [rsp+80h] [rbp+0h] BYREF
  __int64 v18; // [rsp+90h] [rbp+10h]
  __int64 v19; // [rsp+98h] [rbp+18h]

  v19 = -2;
  result = sub_140712590(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  nullsub_1(v7);
  v8 = (_BYTE *)sub_140001650(128, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 128);
  v13 = 128;
  v14 = (__int64)v8;
  v11[0] = &v13;
  v11[1] = asc_141786FF0;
  v11[2] = 2;
  v11[3] = 1;
  v12 = 0;
  *v8 = 123;
  v15 = 1;
  LOWORD(v17) = 256;
  *((_QWORD *)&v17 + 1) = v11;
  result = sub_1404563F0(&v17, aSchemaversion_2, 13, a3 + 136);
  v9 = result;
  if ( result )
    goto LABEL_8;
  if ( (_BYTE)v17 )
    goto LABEL_6;
  result = sub_140456E50(&v17, aLastupdatedat, 13, a3 + 128);
  v9 = result;
  if ( result )
  {
LABEL_8:
    if ( v13 )
      result = sub_140001660(v14, v13, 1);
    goto LABEL_10;
  }
  if ( (_BYTE)v17 )
    goto LABEL_6;
  result = sub_14044E0B0(&v17, aTemplates, 9, a3);
  v9 = result;
  if ( result )
    goto LABEL_8;
  if ( (_BYTE)v17 )
  {
LABEL_6:
    result = sub_1416BF0E0();
    v9 = result;
    goto LABEL_8;
  }
  result = sub_14044E570(&v17, aVocabulary, 10, a3 + 24);
  v9 = result;
  if ( result )
    goto LABEL_8;
  result = sub_14070F6D0(&v17, a3 + 48);
  v9 = result;
  if ( result )
    goto LABEL_8;
  result = sub_14070F6B0(&v17, a3 + 72);
  v9 = result;
  if ( result )
    goto LABEL_8;
  result = sub_14070F6F0(&v17, a3 + 96);
  v9 = result;
  if ( result )
    goto LABEL_8;
  v10 = v17;
  sub_1407BB0F0(&v10);
  result = v14;
  v16 = v14;
  v18 = v13;
  if ( v13 == -1 )
  {
    v9 = v16;
LABEL_10:
    *a1 = 3;
    a1[1] = v9;
    return result;
  }
  result = sub_1408726C0(*(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), v16, v15);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
  }
  else
  {
    *a1 = -1;
  }
  if ( v18 )
    return sub_140001660(v16, v18, 1);
  return result;
}