//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface NewYearResourceMgr : MMService <MMService>
{
}

- (BOOL)checkDecryptedFileWithSubtype:(unsigned long)arg1 fileId:(id)arg2 decryptInfo:(id)arg3;
- (BOOL)checkUnzipFileWithSubtype:(unsigned long)arg1 fileId:(id)arg2 decryptInfo:(id)arg3;
- (BOOL)checkFinalFileWithAppId:(id)arg1 Subtype:(unsigned long)arg2 fileId:(id)arg3 decryptInfo:(id)arg4;
- (id)getResPathWithAppId:(id)arg1 Subtype:(unsigned long)arg2 fileId:(id)arg3 decryptInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

