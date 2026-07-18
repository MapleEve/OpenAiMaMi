// win 1.2.1 NEW upload_debug_report 0x140c28650 d=1
__int64 __fastcall sub_140C28650(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  _QWORD *v12; // [rsp+48h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 4152); /*0x140c28665*/
  if ( !*(_BYTE *)(a1 + 4152) ) /*0x140c2866e*/
  {
    v12 = (_QWORD *)a1; /*0x140c286a2*/
    sub_140C300E0(a1); /*0x140c286a6*/
    result = (__int64)v12; /*0x140c286ac*/
    if ( v12[65] == -1 ) /*0x140c286b8*/
      return result; /*0x140c286b8*/
    v7 = v12 + 65; /*0x140c286c5*/
    v3 = v12[66]; /*0x140c286c9*/
    v8 = v12[67]; /*0x140c286d7*/
    v10 = 0; /*0x140c286db*/
    while ( v8 != v10 ) /*0x140c286f8*/
    {
      ++v10; /*0x140c28701*/
      v4 = v3 + 96; /*0x140c28705*/
      sub_1408780B0(v3); /*0x140c28709*/
      v3 = v4; /*0x140c2870f*/
    }
    goto LABEL_16; /*0x140c286f8*/
  }
  if ( (_DWORD)result != 3 ) /*0x140c28673*/
    return result; /*0x140c28673*/
  v12 = (_QWORD *)a1; /*0x140c28683*/
  if ( *(_BYTE *)(a1 + 4144) == 3 ) /*0x140c28687*/
  {
    v2 = a1 + 2944; /*0x140c28714*/
    goto LABEL_11; /*0x140c28714*/
  }
  if ( !*(_BYTE *)(a1 + 4144) ) /*0x140c28679*/
  {
    v2 = a1 + 1744; /*0x140c28699*/
LABEL_11:
    sub_140C2A240(v2); /*0x140c2871b*/
  }
  sub_140C300E0((__int64)v12); /*0x140c28721*/
  result = (__int64)v12; /*0x140c2872b*/
  if ( v12[65] == -1 ) /*0x140c28737*/
    return result; /*0x140c28737*/
  v7 = v12 + 65; /*0x140c28744*/
  v5 = v12[66]; /*0x140c28748*/
  v9 = v12[67]; /*0x140c28756*/
  v11 = 0; /*0x140c2875a*/
  while ( v9 != v11 ) /*0x140c28778*/
  {
    ++v11; /*0x140c2877d*/
    v6 = v5 + 96; /*0x140c28781*/
    sub_1408780B0(v5); /*0x140c28785*/
    v5 = v6; /*0x140c2878b*/
  }
LABEL_16:
  result = *v7; /*0x140c28790*/
  if ( *v7 ) /*0x140c28794*/
    return sub_140001360(v12[66], 96 * result, 8); /*0x140c287bd*/
  return result; /*0x140c287b5*/
}