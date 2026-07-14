// win 1.1.8 set_codex_router_no_account_mode node va=0x141277ed3 depth=1
// ED3
__int64 sub_141277ED3()
{
  __int64 result; // rax
  char *v1; // rdx
  char v2; // [rsp+2Fh] [rbp-19h] BYREF
  _QWORD *v3; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-10h] BYREF

  result = *((unsigned int *)off_141963508 + 24); /*0x141277ede*/
  if ( (_DWORD)result ) /*0x141277ee3*/
  {
    v4[0] = off_141963508; /*0x141277eef*/
    v1 = &v2; /*0x141277ef2*/
    v4[1] = &v2; /*0x141277ef7*/
    v3 = v4; /*0x141277f00*/
    LOBYTE(v1) = 1; /*0x141277f1a*/
    return sub_1412AC130( /*0x141277f1c*/
             (int)off_141963508 + 96,
             (_DWORD)v1,
             (unsigned int)&v3,
             (unsigned int)&unk_1413200F8,
             (__int64)&off_1413200E0);
  }
  return result; /*0x141277ee5*/
}