// mac 1.2.2 NEW write_client_debug_log 0x100d83400 d=3
_DWORD *__fastcall chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(_DWORD *a1)
{
  int v1; // edx
  __int64 v2; // r14
  __int64 v3; // r15
  int v4; // r12d
  int v5; // eax
  __int64 v7; // [rsp+8h] [rbp-58h] BYREF
  int v8; // [rsp+10h] [rbp-50h]
  __int64 v9; // [rsp+18h] [rbp-48h] BYREF
  int v10; // [rsp+20h] [rbp-40h]
  int v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  int v13; // [rsp+38h] [rbp-28h]

  v9 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100d83417*/
  v10 = v1; /*0x100d8341b*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v11, &v9, 0, 0); /*0x100d8342a*/
  if ( v11 == 1 ) /*0x100d83433*/
  {
    v7 = v12; /*0x100d834c6*/
    v8 = v13; /*0x100d834ca*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100d834eb*/
      (__int64)&unk_1015EA983,
      29,
      (__int64)&v7,
      (__int64)&unk_1018B49B8,
      (__int64)&off_1018B49F8);
  }
  v2 = v12 % 86400; /*0x100d83462*/
  v3 = (v12 % 86400) >> 63; /*0x100d83468*/
  if ( (unsigned __int64)(v3 + v12 / 86400 - 2146764485) < 0xFFFFFFFF00000000LL /*0x100d83499*/
    || (v4 = v13,
        (v5 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)v3
                                                                                         + (unsigned int)(v12 / 86400) + 719163)) == 0) )
  {
    core::option::unwrap_failed::h44626cade04bbf1e(&off_1018B4A10); /*0x100d834f7*/
  }
  *a1 = v5; /*0x100d834a5*/
  a1[1] = v2 + (v3 & 0x15180); /*0x100d834a7*/
  a1[2] = v4; /*0x100d834ab*/
  return a1; /*0x100d834b2*/
}