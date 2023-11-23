from codechecker_common import getLogger
import doxygen_check

LOG = getLogger('mypackage')

def get_argparser():
    parser = argparse.ArgumentParser(
        description='My doxygen checker package')
        
    parser.add_argument('filepath',
                        help='The path to the file to check')
    
    return parser

def main(args):
    LOG.info("Running doxygen checker")
    
    filepath = args.filepath
    doxygen_check.check_doxygen(filepath)
    
if __name__ == '__main__':

    parser = get_argparser()
    args = parser.parse_args()

    main(args)
