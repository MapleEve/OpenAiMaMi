import {
  s as o
} from "./index-UqyngLFp.js";

function e(t) {
  return Number.isInteger(t) && t >= 1 && t <= 100
}
async function r(t) {
  if (!e(t.t5h) || !e(t.tWeekly)) throw new RangeError("Auto-switch thresholds must be integers from 1 to 100");
  return o.configureAutoSwitch(t.t5h, t.tWeekly, t.enable ? !0 : void 0)
}
export {
  e as i, r as s
};