//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTDatabase.h"

@interface WCTDatabase (SQLiteRepairKit)
+ (id)dbPathsFrom:(id)arg1;
+ (id)backupPathsFrom:(id)arg1;
+ (struct NSObject *)extractOneObjectOfClass:(Class)arg1 fromColumn:(struct sqliterk_column *)arg2;
- (id)backupPaths;
- (void)clearBackup;
- (BOOL)backup;
- (id)getRestoreInfos;
- (id)accquireRestoreInfos;
- (id)accquireSortedBackupInfos;
- (BOOL)restoreFromSourceDB:(id)arg1 withDelegate:(id)arg2 error:(id *)arg3;
@end

