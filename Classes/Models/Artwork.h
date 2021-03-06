#import "_Artwork.h"
#import "ARManagedObject.h"
#import "ARGridViewItem.h"

@class Image;


@interface Artwork : _Artwork <ARGridViewItem, ARMultipleSelectionItem>

/// Use `artists` instead, keeping around to ensure backwards compatability.
- (Artist *)artist DEPRECATED_ATTRIBUTE;

/// Use `editionSets` instead
- (NSString *)editions DEPRECATED_ATTRIBUTE;

- (NSArray *)sortedImages;

- (BOOL)hasAdditionalInfo;

- (BOOL)hasSupplementaryInfo;

- (NSString *)dimensions;

- (NSString *)alternativeDimensions;

- (NSString *)availabilityString;

- (NSString *)titleForEmail;

/// Display string for the titles of an Artwork, can handle multiple artists
- (NSString *)artistDisplayString;

/// A string for ordering a set of artworks based on their their artists' ordering key
- (NSString *)artistOrderingString;

/// Price used by Partner (may or may not be available to the public)
- (NSString *)internalPrice;

- (BOOL)hasAdditionalImages;

- (void)deleteArtwork;

+ (NSFetchedResultsController *)allArtworksInContext:(NSManagedObjectContext *)context;

@end
