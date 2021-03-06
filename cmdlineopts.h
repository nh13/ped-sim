// ped-sim: pedigree simulation tool
//
// This program is distributed under the terms of the GNU General Public License

#include <stdio.h>

#ifndef CMDLINEOPTS_H
#define CMDLINEOPTS_H

#define VERSION_NUMBER	"0.99"
#define RELEASE_DATE	"28 Dec 2018"

class CmdLineOpts {
  public:
    //////////////////////////////////////////////////////////////////
    // public static methods
    //////////////////////////////////////////////////////////////////

    static bool parseCmdLineOptions(int argc, char **argv);
    static void printUsage(FILE *out, char *programName);

    //////////////////////////////////////////////////////////////////
    // public static fields : variables set by command-line options
    //////////////////////////////////////////////////////////////////

    // Def file
    static char *defFile;

    // Genetic map file
    static char *mapFile;

    // Interference parameters file
    static char *interfereFile;

    // Input VCF file
    static char *inVCFfile;

    // Output filename prefix
    static char *outPrefix;

    // Should we seed the random number generator using std::random_device()?
    // If false, will use user-supplied value below
    static bool autoSeed;

    // User-supplied random seed OR set to the automatically generated seed
    // later
    static unsigned int randSeed;

    // Rate of genotyping error
    static double genoErrRate;

    // Rate of opposite homozygous genotyping errors
    static double homErrRate;

    // Rate of missingness
    static double missRate;
    
    // Keep phase information in output VCF?
    static int keepPhase;

    // Retain input samples not used to simulate? If -1, will retain all
    // samples not used for simulations. Otherwise, will retain the indicated
    // number of samples
    static int retainExtra;

    // Print the original ids of the founders?
    static int printFounderIds;
};

#endif // CMDOPTIONS_H
