//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface MMMusicPlayerErrInfo : NSObject
{
    int _errCode;
    NSString *_errMsg;
    NSError *_innerError;
}

@property(copy, nonatomic) NSError *innerError; // @synthesize innerError=_innerError;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;
- (id)description;

@end

