//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPaySetPayUserDutyCgiResp : NSObject
{
    unsigned long _retcode;
    NSString *_retmsg;
}

+ (id)genFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *retmsg; // @synthesize retmsg=_retmsg;
@property(nonatomic) unsigned long retcode; // @synthesize retcode=_retcode;
- (void).cxx_destruct;

@end

