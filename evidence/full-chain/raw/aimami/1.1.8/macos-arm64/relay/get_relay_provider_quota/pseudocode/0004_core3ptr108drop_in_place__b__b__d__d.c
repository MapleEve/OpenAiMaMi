// mac 1.1.8 get_relay_provider_quota node va=0x1000a90f0 depth=2
// core3ptr108drop_in_place::b::b::d::d
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_official_provider..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf7f155acb022d629(
        __int64 a1)
{
  int v1; // eax
  int v2; // eax

  switch ( *(_BYTE *)(a1 + 88) ) /*0x1000a9112*/
  {
    case 3: /*0x1000a9112*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h61887dfc3b210d40(a1 + 96); /*0x1000a9197*/
      break; /*0x1000a9197*/
    case 4: /*0x1000a9112*/
    case 7: /*0x1000a9112*/
    case 8: /*0x1000a9112*/
    case 0xB: /*0x1000a9112*/
      if ( *(_BYTE *)(a1 + 896) == 3 ) /*0x1000a911b*/
      {
        v1 = *(unsigned __int8 *)(a1 + 176); /*0x1000a9121*/
        if ( v1 == 4 ) /*0x1000a912b*/
        {
          if ( *(_BYTE *)(a1 + 888) == 3 ) /*0x1000a91a6*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf228961939be7d6d(a1 + 464); /*0x1000a91e0*/
          }
          else if ( !*(_BYTE *)(a1 + 888) ) /*0x1000a919c*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h14e7995aa2ded795(a1 + 328); /*0x1000a91b4*/
          }
        }
        else if ( v1 == 3 ) /*0x1000a9130*/
        {
          core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h95e43b54ca5e420c( /*0x1000a9148*/
            *(_QWORD *)(a1 + 184),
            *(_QWORD *)(a1 + 192));
        }
      }
      break; /*0x1000a9148*/
    case 5: /*0x1000a9112*/
    case 6: /*0x1000a9112*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_siliconflow..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf1020d89a47af636(a1 + 96); /*0x1000a9152*/
      break; /*0x1000a9152*/
    case 9: /*0x1000a9112*/
    case 0xA: /*0x1000a9112*/
      if ( *(_BYTE *)(a1 + 897) == 3 ) /*0x1000a915e*/
      {
        v2 = *(unsigned __int8 *)(a1 + 144); /*0x1000a9160*/
        if ( v2 == 4 ) /*0x1000a916a*/
        {
          if ( *(_BYTE *)(a1 + 856) == 3 ) /*0x1000a91c3*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf228961939be7d6d(a1 + 432); /*0x1000a91ed*/
          }
          else if ( !*(_BYTE *)(a1 + 856) ) /*0x1000a91b9*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h14e7995aa2ded795(a1 + 296); /*0x1000a91d1*/
          }
        }
        else if ( v2 == 3 ) /*0x1000a916f*/
        {
          core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h95e43b54ca5e420c( /*0x1000a9183*/
            *(_QWORD *)(a1 + 152),
            *(_QWORD *)(a1 + 160));
        }
      }
      break; /*0x1000a9183*/
    case 0xC: /*0x1000a9112*/
    case 0xD: /*0x1000a9112*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_minimax_coding_plan..$u7b$$u7b$closure$u7d$$u7d$$GT$::hbbc426bcf8be111f(a1 + 96); /*0x1000a918d*/
      break; /*0x1000a918d*/
    default:
      return;
  }
}