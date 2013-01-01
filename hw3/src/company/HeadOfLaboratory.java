//package company;

import java.io.*;
import java.util.concurrent.*;
import java.util.ArrayList;


public class HeadOfLaboratory {

    private final String name;
    private final String specialization;
    private int numberOfScientists;
    private ExecutorService executor;


    public HeadOfLaboratory(
            String headLabName,
            String specialization,
            int numberOfScientists) {

        this.name = new String(headLabName);
        this.specialization = new String(specialization);
        this.numberOfScientists = numberOfScientists;
        this.executor = Executors.newFixedThreadPool(numberOfScientists);
    }
    

    public void executeExperiment(Runnable experiment) {
        this.executor.execute(experiment);
    }

    public void addScientists(int amount) {
        this.numberOfScientists += amount;
    }

    public String getSpecialization() {
        return this.specialization;
    }

    // TODO need to think about how to stop all threads and to add (by buying new scintist)
    // assume ChiefAssistat will get all the same experiments by specialization
    // add calculate if HeadOfLaboratory should buy new scientist from store - 
    // we should do it after everything is working!
   // public function(){
    //}

    // Initiates an orderly shutdown in which previously
    // submitted tasks are executed, but no new tasks will be accepted.
    // consider if needed: shutdownNow()
    public void shutdownLab() {
        this.executor.shutdown();
    }


    public String toString() {

        StringBuilder result = new StringBuilder();
        String NEW_LINE = System.getProperty("line.separator");
        
        result.append("______________________________________" + NEW_LINE);
        result.append("           ---Head Of Laboratory---: " + NEW_LINE);
        result.append("Name: " + this.name + NEW_LINE);
        result.append("Specialization: " + this.specialization + NEW_LINE);
        result.append("Number Of Scientists: " + this.numberOfScientists + NEW_LINE);
        return result.toString();
    }
}
