// __ZN13codexmate_lib4core5relay13codex_catalog31no_account_slot_routing_changed @ 0x1002254f0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::no_account_slot_routing_changed::h1165a0bed077aaa5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7[6]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  codexmate_lib::core::relay::codex_catalog::no_account_slot_routing_changed::routing_map::h0ea74b873e1cc3e2(v8, a1, a2); /*0x10022550b*/
  codexmate_lib::core::relay::codex_catalog::no_account_slot_routing_changed::routing_map::h0ea74b873e1cc3e2(v7, a3, a4); /*0x10022551a*/
  if ( v8[0] ) /*0x100225528*/
  {
    if ( v7[0] ) /*0x10022552d*/
    {
      LODWORD(a4) = _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h63267d70d68287ea( /*0x10022553c*/
                      v8,
                      v7);
      core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h9346c027758bfcda(v7); /*0x100225542*/
      LOBYTE(a4) = a4 ^ 1; /*0x100225547*/
    }
    else
    {
      LOBYTE(a4) = 1; /*0x10022555e*/
    }
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h9346c027758bfcda(v8); /*0x100225564*/
  }
  else if ( v7[0] ) /*0x10022554f*/
  {
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h9346c027758bfcda(v7); /*0x100225555*/
    LOBYTE(a4) = 1; /*0x10022555a*/
  }
  else
  {
    LODWORD(a4) = 0; /*0x100225574*/
  }
  return (unsigned int)a4; /*0x10022556b*/
}