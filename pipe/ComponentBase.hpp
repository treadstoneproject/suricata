/*
* Suricata source code under GUN version 2 license.
* Copyright 2017, TraceThreat System.
*
*/

/*  Titles			             Authors                            Date
 *  -                                       
 *  -  
 */


/* Configuration base */
void GlobalsInitPreConfig(void)
{
#ifdef __SC_OPENCL_SUPPORT__
    /* Init the CUDA environment */
#endif

    memset(trans_q, 0, sizeof(trans_q));
    memset(data_queues, 0, sizeof(data_queues));

    /* Initialize the trans_q mutex */
    int blah;
    int r = 0;
    for(blah=0;blah<256;blah++) {
        r |= SCMutexInit(&trans_q[blah].mutex_q, NULL);
        r |= SCCondInit(&trans_q[blah].cond_q, NULL);

        r |= SCMutexInit(&data_queues[blah].mutex_q, NULL);
        r |= SCCondInit(&data_queues[blah].cond_q, NULL);
   }

    if (r != 0) {
        SCLogInfo("Trans_Q Mutex not initialized correctly");
        exit(EXIT_FAILURE);
    }

    CreateLowercaseTable();

    TimeInit();
    SupportFastPatternForSigMatchTypes();
}


