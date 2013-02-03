/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface CDLRProperty : NSObject {
    NSInteger statusCode;
    NSInteger type;
    NSString *value;
}

@property(retain) NSString *value;
@property NSInteger statusCode;
@property NSInteger type;

- (void)dealloc;
- (id)initWithType:(NSInteger)arg1 value:(id)arg2 statusCode:(NSInteger)arg3;
- (void)setStatusCode:(NSInteger)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setValue:(id)arg1;
- (NSInteger)statusCode;
- (NSInteger)type;
- (id)value;

@end