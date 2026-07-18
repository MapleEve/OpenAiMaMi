// win 1.2.1 NEW write_client_debug_log 0x1402b2f60 d=2
__int64 __fastcall sub_1402B2F60(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]

  result = *(unsigned __int8 *)a1; /*0x1402b2f75*/
  if ( (unsigned int)result < 3 ) /*0x1402b2f7b*/
    return result; /*0x1402b2f7b*/
  if ( (_DWORD)result == 3 ) /*0x1402b2f86*/
  {
    v4 = a1[1]; /*0x1402b2fd0*/
    if ( !v4 ) /*0x1402b2fd7*/
      return result; /*0x1402b2fd7*/
    v5 = a1[2]; /*0x1402b2fd9*/
    v6 = 1; /*0x1402b2fdd*/
    return sub_140001360(v5, v4, v6); /*0x1402b301d*/
  }
  if ( (_DWORD)result != 4 ) /*0x1402b2f8b*/
    return sub_140416F40(a1 + 1); /*0x1402b2ff1*/
  v8 = a1[3]; /*0x1402b2f99*/
  v10 = 0; /*0x1402b2f9d*/
  v11 = a1[2]; /*0x1402b2fa5*/
  v2 = v11; /*0x1402b2fa9*/
  while ( v8 != v10 ) /*0x1402b2fb8*/
  {
    ++v10; /*0x1402b2fbd*/
    v3 = v2 + 32; /*0x1402b2fc1*/
    sub_140873CB0(); /*0x1402b2fc5*/
    v2 = v3; /*0x1402b2fcb*/
  }
  result = (__int64)a1; /*0x1402b2ff6*/
  v7 = a1[1]; /*0x1402b2ffa*/
  if ( v7 ) /*0x1402b3001*/
  {
    v4 = 32 * v7; /*0x1402b3007*/
    v6 = 8; /*0x1402b300b*/
    v5 = v11; /*0x1402b3011*/
    return sub_140001360(v5, v4, v6); /*0x1402b3011*/
  }
  return result; /*0x1402b2f7d*/
}