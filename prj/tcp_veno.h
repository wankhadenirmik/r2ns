/* Default values of the Veno variables, in fixed-point representation
 * with V_PARAM_SHIFT bits to the right of the binary point.
 */
#define V_PARAM_SHIFT 1
static const int beta_veno = 3 << V_PARAM_SHIFT;

/* Veno variables */
//struct veno {
//	u8 doing_veno_now;	/* if true, do veno for this rtt */
//	u16 cntrtt;		/* # of rtts measured within last rtt */
//	u32 minrtt;		/* min of rtts measured within last rtt (in usec) */
//	u32 basertt;		/* the min of all Veno rtt measurements seen (in usec) */
//	u32 inc;		/* decide whether to increase cwnd */
//	u32 diff;		/* calculate the diff rate */
//};
