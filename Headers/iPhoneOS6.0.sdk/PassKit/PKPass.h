/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "PassKit-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WLImage, WLBarcode, NSString, NSDate, NSSet, NSURL, NSData, UIImage, NSArray, WLCardContent, WLCardImages, WLCardDisplayProfile;

@interface PKPass : XXUnknownSuperclass <NSCopying, NSSecureCoding> {
@private
	WLCardContent* _content;
	WLCardImages* _images[4];
	NSString* _uniqueID;
	NSString* _passTypeIdentifier;
	NSString* _teamID;
	NSString* _localizedDescription;
	NSString* _serialNumber;
	NSString* _organizationName;
	NSDate* _expirationDate;
	NSDate* _relevantDate;
	NSSet* _locations;
	NSURL* _webServiceURL;
	NSString* _authenticationToken;
	WLCardDisplayProfile* _displayProfile;
	NSData* _manifestHash;
	int _settings;
	NSDate* _ingestedDate;
	NSDate* _modifiedDate;
	BOOL _isPreIngested;
}
@property(copy, nonatomic) NSDate* activationDate;
@property(copy, nonatomic) NSString* authenticationToken;	// @synthesize=_authenticationToken
@property(readonly, assign, nonatomic) WLImage* backFaceImage;
@property(readonly, assign, nonatomic) NSArray* backFieldBuckets;
@property(readonly, assign, nonatomic) WLBarcode* barcode;
@property(copy, nonatomic) NSString* bundleID;
@property(readonly, assign, nonatomic) int cardTemplate;
@property(copy, nonatomic) WLCardDisplayProfile* displayProfile;	// @synthesize=_displayProfile
@property(copy, nonatomic) NSDate* expirationDate;	// @synthesize=_expirationDate
@property(readonly, assign, nonatomic) WLImage* footerImage;
@property(readonly, assign, nonatomic) WLImage* frontFaceImage;
@property(readonly, assign, nonatomic) NSArray* frontFieldBuckets;
@property(readonly, assign, nonatomic) UIImage* icon;	// @dynamic
@property(readonly, assign, nonatomic) WLImage* iconImage;
@property(copy, nonatomic) NSString* identifier;
@property(retain, nonatomic) NSDate* ingestedDate;	// @synthesize=_ingestedDate
@property(copy, nonatomic) NSString* institution;
@property(assign, nonatomic) BOOL isPreIngested;	// @synthesize=_isPreIngested
@property(copy, nonatomic) NSString* localizedDescription;	// @synthesize=_localizedDescription
@property(readonly, assign, nonatomic) NSString* localizedName;
@property(copy, nonatomic) NSSet* locations;	// @synthesize=_locations
@property(readonly, assign, nonatomic) CGRect logoRect;
@property(readonly, assign, nonatomic) NSString* logoText;
@property(readonly, assign, nonatomic) NSString* lowercaseTemplateDescription;
@property(retain, nonatomic) NSData* manifestHash;	// @synthesize=_manifestHash
@property(retain, nonatomic) NSDate* modifiedDate;	// @synthesize=_modifiedDate
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* organizationName;	// @synthesize=_organizationName
@property(copy, nonatomic) NSString* passTypeIdentifier;	// @synthesize=_passTypeIdentifier
@property(readonly, assign, nonatomic) NSURL* passURL;
@property(readonly, assign, nonatomic) WLImage* placeHolderImage;
@property(readonly, assign, nonatomic) NSData* placeHolderImageHash;
@property(readonly, assign, nonatomic) NSString* pluralTemplateDescription;
@property(copy, nonatomic) NSURL* pushURL;
@property(copy, nonatomic) NSDate* relevantDate;	// @synthesize=_relevantDate
@property(copy, nonatomic) NSString* serialNumber;	// @synthesize=_serialNumber
@property(assign, nonatomic) int settings;	// @synthesize=_settings
@property(readonly, assign, nonatomic) NSArray* storeIdentifiers;
@property(copy, nonatomic) NSString* teamID;	// @synthesize=_teamID
@property(readonly, assign, nonatomic) NSString* templateDescription;
@property(readonly, assign, nonatomic) CGRect thumbnailRect;
@property(readonly, assign, nonatomic) int transitType;
@property(copy, nonatomic) NSString* uniqueID;	// @synthesize=_uniqueID
@property(copy, nonatomic) NSURL* webServiceURL;	// @synthesize=_webServiceURL
+(BOOL)supportsSecureCoding;
-(id)initWithBundleArchiveData:(id)bundleArchiveData;
-(id)initWithBundleArchiveURL:(id)bundleArchiveURL;
-(id)initWithCoder:(id)coder;
-(id)initWithData:(id)data error:(id*)error;
-(id)_changeMessageForFieldKey:(id)fieldKey;
-(id)_contentLoadingIfNecessary;
-(id)_imageSetLoadingIfNecessary:(int)necessary;
-(void)_setAllowRelevantPasses:(BOOL)passes;
// declared property getter: -(id)activationDate;
-(id)allImageSetsLoadingIfNecessary;
// declared property getter: -(id)authenticationToken;
// declared property getter: -(id)backFaceImage;
// declared property getter: -(id)backFieldBuckets;
// declared property getter: -(id)barcode;
// declared property getter: -(id)bundleID;
// declared property getter: -(int)cardTemplate;
-(BOOL)contentIsLoaded;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(id)displayProfile;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)expirationDate;
-(void)fetchContentWithCompletion:(id)completion;
-(void)fetchImageSet:(int)set withCompletion:(id)completion;
// declared property getter: -(id)footerImage;
// declared property getter: -(id)frontFaceImage;
// declared property getter: -(id)frontFieldBuckets;
-(BOOL)hasTimeOrLocationRelevancyInfo;
// declared property getter: -(id)icon;
// declared property getter: -(id)iconImage;
// declared property getter: -(id)identifier;
-(BOOL)imageSetIsLoaded:(int)loaded;
// declared property getter: -(id)ingestedDate;
// declared property getter: -(id)institution;
// declared property getter: -(BOOL)isPreIngested;
-(BOOL)isUpdatable;
-(void)loadContentAsyncWithCompletion:(id)completion;
-(void)loadContentSync;
-(void)loadImageSetAsync:(int)async preheat:(BOOL)preheat withCompletion:(id)completion;
-(void)loadImageSetSync:(int)sync preheat:(BOOL)preheat;
// declared property getter: -(id)localizedDescription;
// declared property getter: -(id)localizedName;
-(id)localizedValueForFieldKey:(id)fieldKey;
// declared property getter: -(id)locations;
// declared property getter: -(CGRect)logoRect;
// declared property getter: -(id)logoText;
// declared property getter: -(id)lowercaseTemplateDescription;
-(id)mailAttachmentIcon;
// declared property getter: -(id)manifestHash;
// declared property getter: -(id)modifiedDate;
// declared property getter: -(id)name;
// declared property getter: -(id)organizationName;
// declared property getter: -(id)passTypeIdentifier;
// declared property getter: -(id)passURL;
// declared property getter: -(id)placeHolderImage;
// declared property getter: -(id)placeHolderImageHash;
// declared property getter: -(id)pluralTemplateDescription;
// declared property getter: -(id)pushURL;
// declared property getter: -(id)relevantDate;
// declared property getter: -(id)serialNumber;
// declared property setter: -(void)setActivationDate:(id)date;
// declared property setter: -(void)setAuthenticationToken:(id)token;
// declared property setter: -(void)setBundleID:(id)anId;
// declared property setter: -(void)setDisplayProfile:(id)profile;
// declared property setter: -(void)setExpirationDate:(id)date;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setIngestedDate:(id)date;
// declared property setter: -(void)setInstitution:(id)institution;
// declared property setter: -(void)setIsPreIngested:(BOOL)ingested;
// declared property setter: -(void)setLocalizedDescription:(id)description;
// declared property setter: -(void)setLocations:(id)locations;
// declared property setter: -(void)setManifestHash:(id)hash;
// declared property setter: -(void)setModifiedDate:(id)date;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setOrganizationName:(id)name;
// declared property setter: -(void)setPassTypeIdentifier:(id)identifier;
// declared property setter: -(void)setPushURL:(id)url;
// declared property setter: -(void)setRelevantDate:(id)date;
// declared property setter: -(void)setSerialNumber:(id)number;
// declared property setter: -(void)setSettings:(int)settings;
// declared property setter: -(void)setTeamID:(id)anId;
// declared property setter: -(void)setUniqueID:(id)anId;
// declared property setter: -(void)setWebServiceURL:(id)url;
// declared property getter: -(int)settings;
// declared property getter: -(id)storeIdentifiers;
// declared property getter: -(id)teamID;
// declared property getter: -(id)templateDescription;
// declared property getter: -(CGRect)thumbnailRect;
// declared property getter: -(int)transitType;
// declared property getter: -(id)uniqueID;
// declared property getter: -(id)webServiceURL;
@end
