public class TaskManager {

	// To Know whether is a instance of a Task running
	public bool isRunning { get; private set; default = false; }

	// DateTime of end of task
	public DateTime start;
	// DateTime of end of Task
	public DateTime end;
	// ID of Task
	public int taskId;
	// Date of Task
	public DateTime dateOfTask;




	public TaskManager() {
		// unless(isRunning, (e) => {
		// 	start = new DateTime.now();
		// 	isRunning = true;
		// });

		if(!isRunning){
			// start_time = new DateTime.now_utc ();
			start = new DateTime.now_local();
			isRunning = true;
			taskId = Random.int_range(0,10000);
		}

		// return taskId;
		
	}


	public void countTime(){

		var now = new DateTime.now_local();
		
		var result = 1;

		// GLib.Timeout.add(500, () => {
			// var DateTime.now_local();
			// result = 
		// });

		// return result;

	}

	// public unless(condition, then){
		// if(!condition) then();
	// }

}
