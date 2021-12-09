package hw8;
import java.util.List;
public class Interval {
	private float start;
	private float end;
	private boolean is_start_included;
	private boolean is_end_included;
	List<Interval> list;
    public List<Interval> getList() {
        return list;
    }
    public Interval() {
    	this.start = 0;
    	this.end = 0;
    	this.is_end_included = false;
    	this.is_start_included = false;
    }
    public Interval(float start, float end, boolean is_start_included, boolean is_end_included) {
    	this.start = start;
    	this.end = end;
    	this.is_end_included = is_end_included;
    	this.is_start_included = is_end_included;
    }
    public void setList(List<Interval> list) {
        this.list = list;
    }
    public Interval disjunction(Interval other) {
    	Interval ans;
    	if (this.end > other.start) {
    		ans = new  Interval(this.start, other.end, this.is_start_included, other.is_end_included);
    	}
    	if ( this.start < other.end) {
    		ans = new  Interval(other.start, this.end, other.is_start_included, this.is_end_included);
    	}
    	else ans = new Interval();
    	return ans;
    }
    public String toString() {
    	String s = "";
    	if (this.is_start_included) s += "[";
    	else s += "(" + this.start + "," + this.end;
    	if (this.is_end_included) s += "]";
    	else s += ")";
    	return s;		
    }
    public Interval conjunction(Interval other) {
    	Interval ans;
    	if (this.end < other.start && other.end < this.start) {
    		ans = new  Interval();
    	}
    	else if ( this.start < other.start && other.end < this.end) {
    		ans = other;
    	}
    	else if ( other.start < this.start && this.end < other.end) {
    		ans = this;
    	}
    	else if (this.start < other.start && this.end < other.end) {
    		ans = new Interval(other.start, this.end, other.is_start_included, this.is_end_included);
    	}
    	else if (other.start < this.start && other.end < this.end) {
    		ans = new Interval(this.start, other.end, this.is_start_included, other.is_end_included);
    	}
    	else ans = new Interval();
    	
    	return ans;
    }
}
