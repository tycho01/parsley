
trait ScalaJNA {
	import com.sun.jna._;
	import com.sun.jna.ptr._;

	implicit def Long2NativeLong(v: Long) = { new NativeLong(v); }
	implicit def Int2NativeLong(v: Int) = { new NativeLong(v); }
	implicit def NativeLong2Long(v: NativeLong) = { v.longValue() }
	implicit def NativeLong2Int(v: NativeLong) = { v.intValue() }
}
trait ScalaJNAerator extends ScalaJNA