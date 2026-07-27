// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceWorkspacePayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_6(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int16 v8; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aa76fa*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aa76fd*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aa7704*/
  {
    v6 = a2; /*0x140aa7883*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aa7889*/
    a2 = v6; /*0x140aa788e*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aa7891*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aa770e*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aa7715*/
  v8 = 256; /*0x140aa7719*/
  v9 = a2; /*0x140aa7720*/
  result = sub_140458CE0(&v8, aTemplates_1, 9, a1); /*0x140aa773a*/
  if ( !result ) /*0x140aa7742*/
  {
    if ( (_BYTE)v8 ) /*0x140aa7751*/
      return sub_1416BF0E0(); /*0x140aa7751*/
    result = sub_140459340(&v8, aVocabulary_1, 10, a1 + 24); /*0x140aa7775*/
    if ( result ) /*0x140aa777d*/
      return result; /*0x140aa777d*/
    if ( (_BYTE)v8 ) /*0x140aa7784*/
      return sub_1416BF0E0(); /*0x140aa7784*/
    result = sub_1404599B0(&v8, aVocabularyapps_1, 14, a1 + 48); /*0x140aa779c*/
    if ( result ) /*0x140aa77a4*/
      return result; /*0x140aa77a4*/
    if ( (_BYTE)v8 ) /*0x140aa77ab*/
      return sub_1416BF0E0(); /*0x140aa77ab*/
    result = sub_1404588A0(&v8, aHistory_1, 7, a1 + 72); /*0x140aa77c3*/
    if ( result ) /*0x140aa77cb*/
      return result; /*0x140aa77cb*/
    if ( (_BYTE)v8 ) /*0x140aa77d6*/
      return sub_1416BF0E0(); /*0x140aa77d6*/
    result = sub_14045E240(&v8, aSourcepath_0, 10, a1 + 96, v7); /*0x140aa77f2*/
    if ( result ) /*0x140aa77fa*/
      return result; /*0x140aa77fa*/
    if ( (_BYTE)v8 ) /*0x140aa7805*/
      return sub_1416BF0E0(); /*0x140aa775a*/
    result = sub_140467810(&v8, aLastupdatedat_1, 13, a1 + 120); /*0x140aa7824*/
    if ( !result ) /*0x140aa782c*/
    {
      result = 0; /*0x140aa7832*/
      if ( (v8 & 1) == 0 ) /*0x140aa7839*/
      {
        if ( HIBYTE(v8) ) /*0x140aa7844*/
        {
          sub_140301CD0(*v9, asc_1417AE501, 1); /*0x140aa785f*/
          return 0; /*0x140aa7864*/
        }
      }
    }
  }
  return result; /*0x140aa7744*/
}