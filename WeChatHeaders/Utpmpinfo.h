//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"

@class NSMutableArray, NSString;

@interface Utpmpinfo : NSObject <NSMutableCopying>
{
    NSString *Number;
    NSString *SendNumber;
    NSString *SendRate;
    NSString *SendType;
    NSMutableArray *GoodsList;
    NSString *sendExt;
}

@property(retain, nonatomic) NSString *sendExt; // @synthesize sendExt;
@property(retain, nonatomic) NSMutableArray *GoodsList; // @synthesize GoodsList;
@property(copy, nonatomic) NSString *SendType; // @synthesize SendType;
@property(copy, nonatomic) NSString *SendRate; // @synthesize SendRate;
@property(copy, nonatomic) NSString *SendNumber; // @synthesize SendNumber;
@property(copy, nonatomic) NSString *Number; // @synthesize Number;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (int)myCompare:(id)arg1;

@end

