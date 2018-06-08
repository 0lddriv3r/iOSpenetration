//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSCrashReportFilter.h"

@class NSArray, NSString;

@interface KSCrashReportFilterSubset : NSObject <KSCrashReportFilter>
{
    NSArray *_keyPaths;
}

+ (id)filterWithKeys:(id)arg1;
@property(retain, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
- (void).cxx_destruct;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithKeysArray:(id)arg1;
- (id)initWithKeys:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

