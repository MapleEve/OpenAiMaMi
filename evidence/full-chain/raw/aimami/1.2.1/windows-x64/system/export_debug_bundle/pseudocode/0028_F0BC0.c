// win 1.2.1 NEW export_debug_bundle 0x1415f0bc0 d=1
void __fastcall __noreturn sub_1415F0BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = a1; /*0x1415f0bce*/
  v7[1] = a2; /*0x1415f0bd2*/
  v6[0] = a3; /*0x1415f0bd6*/
  v6[1] = a4; /*0x1415f0bda*/
  v5[0] = v7; /*0x1415f0be2*/
  v5[1] = sub_1413D9350; /*0x1415f0bed*/
  v5[2] = v6; /*0x1415f0bf5*/
  v5[3] = sub_1413BE5A0; /*0x1415f0c00*/
  sub_1415F0E20(&unk_141966D24, v5, a5); /*0x1415f0c12*/
}