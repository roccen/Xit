#import <Foundation/Foundation.h>

@interface NSMutableDictionary (NSMutableDictionary_MultiObjectForKey)

- (void)addObject:(id)anObject forKey:(id)aKey;

@end


@interface NSDictionary (NSDictionary_MultiObjectForKey)

- (NSArray *)objectsForKey:(id)aKey;

@end