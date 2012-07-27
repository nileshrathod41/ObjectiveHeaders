/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSBundle : XXUnknownSuperclass {
@private
	unsigned _flags;
	id _cfBundle;
	unsigned _reserved2;
	Class _principalClass;
	id _tmp1;
	id _tmp2;
	void* _reserved1;
	void* _reserved0;
}
+(id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;
+(id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory inBundleWithURL:(id)url;
+(id)allBundles;
+(id)allFrameworks;
+(id)bundleForClass:(Class)aClass;
+(id)bundleWithIdentifier:(id)identifier;
+(id)bundleWithPath:(id)path;
+(id)bundleWithURL:(id)url;
+(id)debugDescription;
+(id)findBundleResourceURLs:(id)urls callingMethod:(SEL)method bundleURL:(id)url languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;
+(id)findBundleResourceURLsCallingMethod:(SEL)method baseURL:(id)url passingTest:(id)test;
+(id)findBundleResources:(id)resources callingMethod:(SEL)method directory:(id)directory languages:(id)languages name:(id)name types:(id)types limit:(unsigned)limit;
+(id)loadedBundles;
+(id)mainBundle;
+(id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;
+(id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;
+(id)preferredLocalizationsFromArray:(id)array;
+(id)preferredLocalizationsFromArray:(id)array forPreferences:(id)preferences;
+(void)setSystemLanguages:(id)languages;
-(id)initWithPath:(id)path;
-(id)initWithURL:(id)url;
-(id)URLForAuxiliaryExecutable:(id)auxiliaryExecutable;
-(id)URLForResource:(id)resource withExtension:(id)extension;
-(id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory;
-(id)URLForResource:(id)resource withExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;
-(id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory;
-(id)URLsForResourcesWithExtension:(id)extension subdirectory:(id)subdirectory localization:(id)localization;
-(CFBundleRef)_cfBundle;
-(id)_compatibility_bundleURL;
-(id)_compatility_bundlePath;
-(id)_computeExecutablePath;
-(void)_initInfoDictionary;
-(id)_pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forRegion:(id)region;
-(id)_pathsForResourcesOfType:(id)type inDirectory:(id)directory forRegion:(id)region;
-(id)_regionsArray;
-(id)builtInPlugInsPath;
-(id)builtInPlugInsURL;
-(id)bundleIdentifier;
-(id)bundleLanguages;
-(id)bundlePath;
-(id)bundleURL;
-(Class)classNamed:(id)named;
-(void)dealloc;
-(id)defaultsDictionary;
-(id)description;
-(id)developmentLocalization;
-(id)executableArchitectures;
-(id)executablePath;
-(id)executableURL;
-(void)finalize;
-(id)findBundleResourceURLsCallingMethod:(SEL)method passingTest:(id)test;
-(id)infoDictionary;
-(void)invalidateResourceCache;
-(BOOL)isLoaded;
-(BOOL)load;
-(BOOL)loadAndReturnError:(id*)error;
-(id)localizations;
-(id)localizationsToSearch;
-(id)localizedInfoDictionary;
-(id)localizedStringForKey:(id)key value:(id)value table:(id)table;
-(id)objectForInfoDictionaryKey:(id)infoDictionaryKey;
-(id)pathForAuxiliaryExecutable:(id)auxiliaryExecutable;
-(id)pathForResource:(id)resource ofType:(id)type;
-(id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;
-(id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLanguage:(id)language;
-(id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory forLocalization:(id)localization;
-(id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;
-(id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLanguage:(id)language;
-(id)pathsForResourcesOfType:(id)type inDirectory:(id)directory forLocalization:(id)localization;
-(id)preferredLocalizations;
-(BOOL)preflightAndReturnError:(id*)error;
-(Class)principalClass;
-(id)privateFrameworksPath;
-(id)privateFrameworksURL;
-(oneway void)release;
-(id)resourcePath;
-(id)resourceURL;
-(id)sharedFrameworksPath;
-(id)sharedFrameworksURL;
-(id)sharedSupportPath;
-(id)sharedSupportURL;
-(BOOL)unload;
-(unsigned)versionNumber;
@end
