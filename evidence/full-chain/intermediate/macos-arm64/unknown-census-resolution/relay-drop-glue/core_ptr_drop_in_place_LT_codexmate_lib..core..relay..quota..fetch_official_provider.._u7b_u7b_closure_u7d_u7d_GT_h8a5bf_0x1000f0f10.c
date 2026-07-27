// IDA Hex-Rays decompile evidence
// addr: 0x1000f0f10
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_official_provider..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8a5bf6edf33013c9(
        __int64 a1)
{
  int v1; // eax
  int v2; // eax

  switch ( *(_BYTE *)(a1 + 88) ) /*0x1000f0f32*/
  {
    case 3: /*0x1000f0f32*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6a102f4adceb3d26(a1 + 96); /*0x1000f0fb7*/
      break; /*0x1000f0fb7*/
    case 4: /*0x1000f0f32*/
    case 7: /*0x1000f0f32*/
    case 8: /*0x1000f0f32*/
    case 0xB: /*0x1000f0f32*/
      if ( *(_BYTE *)(a1 + 896) == 3 ) /*0x1000f0f3b*/
      {
        v1 = *(unsigned __int8 *)(a1 + 176); /*0x1000f0f41*/
        if ( v1 == 4 ) /*0x1000f0f4b*/
        {
          if ( *(_BYTE *)(a1 + 888) == 3 ) /*0x1000f0fc6*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a1 + 464); /*0x1000f1000*/
          }
          else if ( !*(_BYTE *)(a1 + 888) ) /*0x1000f0fbc*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(a1 + 328); /*0x1000f0fd4*/
          }
        }
        else if ( v1 == 3 ) /*0x1000f0f50*/
        {
          core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x1000f0f68*/
            *(_QWORD *)(a1 + 184),
            *(_QWORD *)(a1 + 192));
        }
      }
      break; /*0x1000f0f68*/
    case 5: /*0x1000f0f32*/
    case 6: /*0x1000f0f32*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_siliconflow..$u7b$$u7b$closure$u7d$$u7d$$GT$::heed8e6eb155e2ae6(a1 + 96); /*0x1000f0f72*/
      break; /*0x1000f0f72*/
    case 9: /*0x1000f0f32*/
    case 0xA: /*0x1000f0f32*/
      if ( *(_BYTE *)(a1 + 897) == 3 ) /*0x1000f0f7e*/
      {
        v2 = *(unsigned __int8 *)(a1 + 144); /*0x1000f0f80*/
        if ( v2 == 4 ) /*0x1000f0f8a*/
        {
          if ( *(_BYTE *)(a1 + 856) == 3 ) /*0x1000f0fe3*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a1 + 432); /*0x1000f100d*/
          }
          else if ( !*(_BYTE *)(a1 + 856) ) /*0x1000f0fd9*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(a1 + 296); /*0x1000f0ff1*/
          }
        }
        else if ( v2 == 3 ) /*0x1000f0f8f*/
        {
          core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x1000f0fa3*/
            *(_QWORD *)(a1 + 152),
            *(_QWORD *)(a1 + 160));
        }
      }
      break; /*0x1000f0fa3*/
    case 0xC: /*0x1000f0f32*/
    case 0xD: /*0x1000f0f32*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_minimax_coding_plan..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2fa71842fa676f54(a1 + 96); /*0x1000f0fad*/
      break; /*0x1000f0fad*/
    default:
      return;
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x10012a720  __ZN4core3ptr97drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$17h6a102f4adceb3d26E
// 0x10012a670  __ZN4core3ptr96drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$17he09c21e64e830488E_0
// 0x1001258f0  __ZN4core3ptr60drop_in_place$LT$reqwest..async_impl..response..Response$GT$17h21f3ce44ac02ee4aE_0
// 0x1001246b0  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E_0
// 0x1000ee1d0  __ZN4core3ptr102drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_siliconflow..$u7b$$u7b$closure$u7d$$u7d$$GT$17heed8e6eb155e2ae6E
// 0x1000f18a0  __ZN4core3ptr110drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_minimax_coding_plan..$u7b$$u7b$closure$u7d$$u7d$$GT$17h2fa71842fa676f54E
