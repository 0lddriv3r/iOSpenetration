//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AudioRecorderUserData : NSObject
{
    NSString *fromusr;
    NSString *tousr;
    NSString *chatname;
    unsigned long createtime;
    unsigned long audioid;
    NSString *msgSource;
}

@property(copy) NSString *msgSource; // @synthesize msgSource;
@property unsigned long audioid; // @synthesize audioid;
@property unsigned long createtime; // @synthesize createtime;
@property(retain) NSString *chatname; // @synthesize chatname;
@property(retain) NSString *tousr; // @synthesize tousr;
@property(retain) NSString *fromusr; // @synthesize fromusr;
- (void).cxx_destruct;

@end

