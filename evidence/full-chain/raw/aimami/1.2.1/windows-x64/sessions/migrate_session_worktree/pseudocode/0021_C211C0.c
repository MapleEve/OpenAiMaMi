// win 1.2.1 NEW migrate_session_worktree 0x140c211c0 d=1
__int64 __fastcall sub_140C211C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 *v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  _QWORD *v11; // [rsp+48h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 768); /*0x140c211d5*/
  if ( !*(_BYTE *)(a1 + 768) ) /*0x140c211de*/
  {
    v11 = (_QWORD *)a1; /*0x140c21274*/
    sub_140C300E0(a1); /*0x140c21278*/
    result = (__int64)v11; /*0x140c2127e*/
    if ( v11[65] == -1 ) /*0x140c2128a*/
      return result; /*0x140c2128a*/
    v6 = v11 + 65; /*0x140c21297*/
    v4 = v11[66]; /*0x140c2129b*/
    v8 = v11[67]; /*0x140c212a9*/
    v10 = 0; /*0x140c212ad*/
    while ( v8 != v10 ) /*0x140c212c8*/
    {
      ++v10; /*0x140c212cd*/
      v5 = v4 + 96; /*0x140c212d1*/
      sub_1408780B0(v4); /*0x140c212d5*/
      v4 = v5; /*0x140c212db*/
    }
    goto LABEL_11; /*0x140c212c8*/
  }
  if ( (_DWORD)result == 3 ) /*0x140c211e7*/
  {
    v11 = (_QWORD *)a1; /*0x140c211ed*/
    sub_140C09460(a1 + 616); /*0x140c211f8*/
    sub_140C300E0((__int64)v11); /*0x140c21202*/
    result = (__int64)v11; /*0x140c21208*/
    if ( v11[65] != -1 ) /*0x140c21214*/
    {
      v6 = v11 + 65; /*0x140c21221*/
      v2 = v11[66]; /*0x140c21225*/
      v7 = v11[67]; /*0x140c21233*/
      v9 = 0; /*0x140c21237*/
      while ( v7 != v9 ) /*0x140c21258*/
      {
        ++v9; /*0x140c21261*/
        v3 = v2 + 96; /*0x140c21265*/
        sub_1408780B0(v2); /*0x140c21269*/
        v2 = v3; /*0x140c2126f*/
      }
LABEL_11:
      result = *v6; /*0x140c212e0*/
      if ( *v6 ) /*0x140c212e4*/
        return sub_140001360(v11[66], 96 * result, 8); /*0x140c2130d*/
    }
  }
  return result; /*0x140c21305*/
}