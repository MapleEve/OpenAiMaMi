// win 1.2.1 NEW set_voice_overlay_style 0x1415f0b60 d=2
void __fastcall __noreturn sub_1415F0B60(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-10h] BYREF

  v4[0] = a1; /*0x1415f0b6a*/
  v4[1] = a2; /*0x1415f0b6e*/
  v3[0] = v4; /*0x1415f0b76*/
  v3[1] = sub_1413D9350; /*0x1415f0b81*/
  sub_1415F0E20(&unk_141966344, v3, a3); /*0x1415f0b90*/
}