// __ZN13codexmate_lib4core5relay18router_unlock_auth23prepare_auth_for_router @ 0x10051fff0 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::router_unlock_auth::prepare_auth_for_router::h5194b92ecafd8ccf(
        char *a1,
        __int64 a2,
        char a3,
        double a4)
{
  __int64 v5; // r12
  char v6; // r14
  _BYTE __dst[87]; // [rsp+9h] [rbp-D7h] BYREF
  _QWORD v9[16]; // [rsp+60h] [rbp-80h] BYREF

  if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(a2) /*0x10052004d*/
    && ((unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2)
     && (codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(v9, a2), v5 = v9[0], v9[0] != 11)
     || (codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h4e431c2ba7f134fc(v9, a2), v5 = v9[0], v9[0] != 11)) )
  {
    v6 = v9[1]; /*0x100520085*/
    memcpy(__dst, (char *)&v9[1] + 1, sizeof(__dst)); /*0x10052009a*/
    *(_QWORD *)a1 = v5; /*0x10052009f*/
    a1[8] = v6; /*0x1005200a2*/
    memcpy(a1 + 9, __dst, 0x57u); /*0x1005200b9*/
  }
  else if ( a3 ) /*0x100520052*/
  {
    codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h1fbbeee5d38cb27b(v9, a2, 1, a4); /*0x100520060*/
    if ( LODWORD(v9[0]) == 11 ) /*0x100520069*/
    {
      a1[8] = 1; /*0x10052006b*/
      *(_QWORD *)a1 = 11; /*0x10052006f*/
    }
    else
    {
      qmemcpy(a1, v9, 0x60u); /*0x1005200cc*/
    }
  }
  else
  {
    codexmate_lib::core::relay::router_unlock_auth::ensure_auth_for_router::h48dde466d6c9786e(a1, a2, a4); /*0x10052007e*/
  }
  return a1; /*0x1005200d2*/
}