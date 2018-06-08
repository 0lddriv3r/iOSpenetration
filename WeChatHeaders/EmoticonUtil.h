//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EmoticonUtil : NSObject
{
}

+ (void)reportMigrationStateWithKey:(int)arg1;
+ (BOOL)migrationEmoticonForEmoticonList:(id)arg1 isCustomEmoticon:(BOOL)arg2;
+ (BOOL)renameFileOldPath:(const char *)arg1 toNewPath:(const char *)arg2;
+ (void)renameOldDirToAutoCleanDir;
+ (BOOL)hasOldEmoticonDir;
+ (id)fileTimeStateForMd5:(id)arg1;
+ (void)resetAllFileToOldDir;
+ (id)GetDownloadingPathOfEmoticonInTempDirForMd5:(id)arg1;
+ (id)GetPathOfEmoticonInTempDirForMd5:(id)arg1;
+ (id)GetPathOfTempEmoticonDir;
+ (id)pathOfCleanableDirWithWxAM:(BOOL)arg1;
+ (id)pathOfNotCleanDirWithWxAM:(BOOL)arg1;
+ (id)pathOfCleanableDir;
+ (id)pathOfNotCleanDir;
+ (id)pathOfAutoCleanDir;
+ (id)pathOfOldDir;
+ (id)fileNameForMd5:(id)arg1 isWxAM:(BOOL)arg2;
+ (void)cleanFileWithMd5:(id)arg1 isWxAM:(BOOL)arg2;
+ (BOOL)InternalMoveToTargetPath:(id)arg1 originPath:(id)arg2 originData:(id)arg3;
+ (BOOL)InternalMoveToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 originData:(id)arg3 isCleanable:(BOOL)arg4;
+ (BOOL)migrationEmoticonForMd5:(id)arg1 toDirIsCleanable:(BOOL)arg2;
+ (BOOL)moveFileToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 isCleanable:(BOOL)arg3;
+ (BOOL)saveEmoticonToEmoticonDirForMd5:(id)arg1 data:(id)arg2 isCleanable:(BOOL)arg3;
+ (id)loadDataOfEmoticonForMd5:(id)arg1 offset:(unsigned long)arg2 maxLen:(unsigned long)arg3;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(BOOL)arg2 ignoreWxAM:(BOOL)arg3;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(BOOL)arg2;
+ (id)dataOfEmoticonForMd5:(id)arg1;
+ (BOOL)removeFileOfEmoticonForMd5:(id)arg1;
+ (BOOL)fileExistInNotCleanDirOfEmoticonForMd5:(id)arg1 includeOldDir:(BOOL)arg2;
+ (BOOL)fileExistOfEmoticonForMd5:(id)arg1;
+ (long long)fileSizeOfEmoticonForMd5:(id)arg1;
+ (id)pathOfEmoticonForMd5:(id)arg1 needUpdateTime:(BOOL)arg2 ignoreWxAM:(BOOL)arg3;
+ (id)pathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)pathOfThumbDir;
+ (id)thumbPathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)thumbPathOfEmoticonForMd5:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(float)arg2;
+ (id)imageWithData:(id)arg1;
+ (BOOL)isSingleFrameWithData:(id)arg1;
+ (BOOL)isWxAMData:(id)arg1;
+ (BOOL)isEnableToDownloadWxAM;
+ (BOOL)isSupportWxAM;
+ (void)setWxAMConfig:(id)arg1;
+ (BOOL)FileExist:(id)arg1 byUtime:(BOOL)arg2;
+ (unsigned long long)getEmotionTotalSize;
+ (BOOL)isInGetDetailBlockListForProductId:(id)arg1;
+ (id)extInfoForAppid:(id)arg1 DesignerId:(id)arg2 activityId:(id)arg3 thumbImgUrl:(id)arg4;
+ (BOOL)unZipRes:(id)arg1 toPath:(id)arg2;
+ (unsigned int)GetSearchTemplateVesionFromConfigFileInDir:(id)arg1;
+ (id)GetPathOfRewardTipsStatisticsDataFile;
+ (id)getEmotionRewardInfoCacheForPid:(id)arg1;
+ (id)getEmotionRewardInfoCacheDir;
+ (id)getUserEmotionCommonDataDir;
+ (id)GetEmojiEggConfigDir;
+ (id)GetEmojiSuggestConfigDir;
+ (id)GetEmojiPanelConfigDir;
+ (id)GetNewEmojiConfigDir;
+ (id)GetTempPathOfUnZipDir;
+ (id)GetDownloadPathOfEmotionSearchDir;
+ (id)GetDownloadPathOfEmotionSearchTempDir;
+ (id)GetDefaultPathOfEmotionSearchDir;
+ (id)getEmotionActivityDecodeFilePathForActivityId:(id)arg1;
+ (id)getEmotionActivityDecodeDir;
+ (id)getEmotionDesignerIdDecodeFilePath;
+ (id)getEmotionPersonalDesignerFilePathForUin:(unsigned long)arg1;
+ (id)getEmotionPersonalDesignerDir;
+ (id)getEmotionCommonCacheDir;

@end

