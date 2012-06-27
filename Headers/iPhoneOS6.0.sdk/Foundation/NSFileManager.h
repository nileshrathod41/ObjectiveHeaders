/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>


@interface NSFileManager : NSObject {
}
+(id)defaultManager;
-(id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id*)error;
-(id)URLForPublishingUbiquitousItemAtURL:(id)url expirationDate:(id*)date error:(id*)error;
-(id)URLForUbiquityContainerIdentifier:(id)ubiquityContainerIdentifier;
-(id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;
-(id)_URLForReplacingItemAtURL:(id)url error:(id*)error;
-(id)_URLForTrashingItemAtURL:(id)url create:(BOOL)create error:(id*)error;
-(id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id*)error;
-(id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id*)error;
-(id)_displayPathForPath:(id)path;
-(id)_info;
-(void)_performRemoveFileAtPath:(id)path;
-(BOOL)_processHasUbiquityContainerEntitlement;
-(void)_registerForUbiquityAccountChangeNotifications;
-(void)_web_backgroundRemoveFileAtPath:(id)path;
-(void)_web_backgroundRemoveLeftoverFiles:(id)files;
-(id)_web_carbonPathForPath_nowarn:(id)path_nowarn;
-(BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;
-(BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;
-(BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;
-(BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;
-(BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;
-(BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;
-(BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL*)directory traverseLink:(BOOL)link;
-(void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;
-(id)_web_pathWithUniqueFilenameForPath:(id)path;
-(BOOL)_web_removeFileOnlyAtPath:(id)path;
-(id)_web_startupVolumeName_nowarn;
-(id)_web_visibleItemsInDirectoryAtPath:(id)path;
-(id)attributesOfFileSystemForPath:(id)path error:(id*)error;
-(id)attributesOfItemAtPath:(id)path error:(id*)error;
-(BOOL)changeCurrentDirectoryPath:(id)path;
-(BOOL)changeFileAttributes:(id)attributes atPath:(id)path;
-(id)componentsToDisplayForPath:(id)path;
-(id)contentsAtPath:(id)path;
-(BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;
-(id)contentsOfDirectoryAtPath:(id)path error:(id*)error;
-(id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id*)error;
-(BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id*)error;
-(BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id*)error;
-(BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;
-(BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id*)error;
-(BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id*)error;
-(BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;
-(BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;
-(BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id*)error;
-(BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)destinationURL error:(id*)error;
-(id)currentDirectoryPath;
-(void)dealloc;
-(id)delegate;
-(id)destinationOfSymbolicLinkAtPath:(id)path error:(id*)error;
-(BOOL)directoryCanBeCreatedAtPath:(id)path;
-(id)directoryContentsAtPath:(id)path;
-(id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;
-(id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id*)error;
-(id)displayNameAtPath:(id)path;
-(id)enumeratorAtPath:(id)path;
-(id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;
-(BOOL)evictUbiquitousItemAtURL:(id)url error:(id*)error;
-(id)extendedAttributeForKey:(id)key atPath:(id)path error:(id*)error;
-(id)extendedAttributesAtPath:(id)path error:(id*)error;
-(id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;
-(BOOL)fileExistsAtPath:(id)path;
-(BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL*)directory;
-(id)fileSystemAttributesAtPath:(id)path;
-(const char*)fileSystemRepresentationWithPath:(id)path;
-(BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;
-(BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;
-(BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;
-(BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;
-(BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;
-(BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;
-(BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;
-(BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;
-(BOOL)getFileSystemRepresentation:(char*)representation maxLength:(unsigned)length withPath:(id)path;
-(BOOL)isDeletableFileAtPath:(id)path;
-(BOOL)isExecutableFileAtPath:(id)path;
-(BOOL)isReadableFileAtPath:(id)path;
-(BOOL)isUbiquitousItemAtURL:(id)url;
-(BOOL)isWritableFileAtPath:(id)path;
-(BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id*)error;
-(BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id*)error;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;
-(BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id*)error;
-(BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id*)error;
-(id)pathContentOfSymbolicLinkAtPath:(id)path;
-(BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id*)error;
-(BOOL)removeFileAtPath:(id)path handler:(id)handler;
-(BOOL)removeItemAtPath:(id)path error:(id*)error;
-(BOOL)removeItemAtURL:(id)url error:(id*)error;
-(BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id*)url5 error:(id*)error;
-(BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id*)error;
-(void)setDelegate:(id)delegate;
-(BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id*)error;
-(BOOL)setUbiquitous:(BOOL)ubiquitous itemAtURL:(id)url destinationURL:(id)url3 error:(id*)error;
-(BOOL)startDownloadingUbiquitousItemAtURL:(id)url error:(id*)error;
-(id)stringWithFileSystemRepresentation:(const char*)fileSystemRepresentation length:(unsigned)length;
-(id)subpathsAtPath:(id)path;
-(id)subpathsOfDirectoryAtPath:(id)path error:(id*)error;
-(BOOL)trashItemAtURL:(id)url resultingItemURL:(id*)url2 error:(id*)error;
-(id)ubiquityIdentityToken;
@end

