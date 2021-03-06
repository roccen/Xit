#import <Foundation/Foundation.h>

@class XTModDateTracker;
@class XTRepository;

@interface XTStagingDataSourceBase : NSObject<NSTableViewDataSource> {
 @protected
  XTRepository *repo;
  NSMutableArray *items;
  NSTableView *table;
  BOOL reloading;
  XTModDateTracker *indexTracker;
}

- (NSArray *)items;
- (void)reload;
- (void)setRepo:(XTRepository *)newRepo;
- (BOOL)shouldReloadForPaths:(NSArray *)paths;

@end
