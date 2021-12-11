#pragma once

#pragma warning(disable: 4018 4221 4244 4267 4288 4302 4305 4311 4312 4733 4838 4996)

#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT	0x0501

#define _HAS_EXCEPTIONS 0

#include <Windows.h>
#include <string>
#include <regex>
#include <type_traits>
#include <initializer_list>
#include <intrin.h>

#include "internal/version.h"

typedef unsigned char UInt8;
typedef unsigned short UInt16;
typedef unsigned long UInt32;
typedef unsigned long long UInt64;
typedef signed char SInt8;
typedef signed short SInt16;
typedef signed long SInt32;
typedef signed long long SInt64;

class BaseFormComponent;
class TESFullName;
class TESTexture;
class TESTexture1024;
class TESIcon;
class TESScriptableForm;
class BGSMessageIcon;
class TESValueForm;
class TESEnchantableForm;
class TESImageSpaceModifiableForm;
class TESWeightForm;
class TESHealthForm;
class TESAttackDamageForm;
class MagicItem;
class TESModel;
class BGSTextureModel;
class TESModelTextureSwap;
class BGSClipRoundsForm;
class BGSDestructibleObjectForm;
class BGSPickupPutdownSounds;
class BGSAmmoForm;
class BGSRepairItemList;
class BGSEquipType;
class BGSPreloadable;
class BGSBipedModelList;
class TESModelRDT;
class TESBipedModelForm;
class TESContainer;
class BGSTouchSpellForm;
class TESActorBaseData;
class TESSpellList;
class TESAIForm;
class TESAttributes;
class TESAnimation;
class TESModelList;
class TESDescription;
class TESReactionForm;
class TESRaceForm;
class TESSoundFile;
class TESModelAnim;
class TESLeveledList;
class TESForm;
class TESObject;
class TESBoundObject;
class EffectItem;
class EffectItemList;
class MagicItemForm;
class TESBoundAnimObject;
class ActorValueOwner;
class CachedValuesOwner;
class TESActorBase;
class BSTextureSet;
class BGSQuestObjective;
class BGSOpenCloseForm;
class TESIdleForm;
class TESTopicInfo;
class TESTopic;
class BGSTextureSet;
class BGSMenuIcon;
class TESGlobal;
class TESClass;
class TESReputation;
class TESFaction;
class BGSHeadPart;
class TESHair;
class TESEyes;
class TESRace;
class TESSound;
class BGSAcousticSpace;
class TESSkill;
class EffectSetting;
class TESGrass;
class TESLandTexture;
class EnchantmentItem;
class SpellItem;
class TESObjectACTI;
class BGSTalkingActivator;
class BGSTerminal;
class TESFurniture;
class TESObjectARMO;
class TESObjectBOOK;
class TESObjectCLOT;
class TESObjectCONT;
class TESObjectDOOR;
class IngredientItem;
class TESObjectLIGH;
class TESObjectMISC;
class TESCasinoChips;
class TESCaravanMoney;
class TESObjectSTAT;
class BGSMovableStatic;
class BGSStaticCollection;
class BGSPlaceableWater;
class TESObjectTREE;
class TESFlora;
class TESObjectIMOD;
class TESObjectWEAP;
class TESAmmoEffect;
class TESAmmo;
class TESCaravanCard;
class TESNPC;
class TESCreature;
class TESLevCreature;
class TESLevCharacter;
class TESKey;
class AlchemyItem;
class BGSIdleMarker;
class BGSNote;
class BGSConstructibleObject;
class BGSProjectile;
class TESLevItem;
class TESWeather;
class TESClimate;
class TESRegionData;
class TESRegionDataGrass;
class TESRegionDataImposter;
class TESRegionDataLandscape;
class TESRegionDataMap;
class TESRegionDataSound;
class TESRegionDataWeather;
class TESRegion;
class TESRegionList;
class NavMeshInfoMap;
class NavMesh;
class TESObjectCELL;
class TESWorldSpace;
class TESChildCell;
class TESObjectLAND;
class TESQuest;
class TESPackage;
class DialoguePackage;
class FleePackage;
class TressPassPackage;
class SpectatorPackage;
class BackUpPackage;
class CombatController;
class TESCombatStyle;
class TESRecipeCategory;
class TESRecipe;
class TESLoadScreenType;
class TESLoadScreen;
class TESLevSpell;
class TESObjectANIO;
class TESWaterForm;
class TESEffectShader;
class BGSExplosion;
class BGSDebris;
class TESImageSpace;
class TESImageSpaceModifier;
class BGSListForm;
class BGSPerkEntry;
class BGSQuestPerkEntry;
class BGSAbilityPerkEntry;
class BGSEntryPointFunctionData;
class BGSEntryPointFunctionDataOneValue;
class BGSEntryPointFunctionDataTwoValue;
class BGSEntryPointFunctionDataLeveledList;
class BGSEntryPointFunctionDataActivateChoice;
class BGSEntryPointPerkEntry;
class BGSPerk;
class TESCasino;
class TESChallenge;
class BGSBodyPart;
class BGSBodyPartData;
class MediaSet;
class MediaLocationController;
class BGSAddonNode;
class ActorValueInfo;
class BGSRadiationStage;
class BGSDehydrationStage;
class BGSHungerStage;
class BGSSleepDeprevationStage;
class BGSCameraShot;
class BGSCameraPath;
class BGSVoiceType;
class BGSImpactData;
class BGSImpactDataSet;
class TESObjectARMA;
class BGSEncounterZone;
class BGSMessage;
class BGSRagdoll;
class BGSLightingTemplate;
class BGSMusicType;
class TESCaravanDeck;
class BGSDefaultObjectManager;
class BGSItemList;
class BoundObjectListHead;
class FaceGenUndo;
class BGSSaveLoadGame;

struct ValidBip01Names;
class TESObjectREFR;
class MobileObject;
class MagicCaster;
class MagicTarget;
class PathingLocation;
class ActorMover;
class PlayerMover;
class Actor;
class Creature;
class Character;
class PlayerCharacter;
class Projectile;
class BeamProjectile;
class ContinuousBeamProjectile;
class FlameProjectile;
class GrenadeProjectile;
class MissileProjectile;
class Explosion;
class Setting;
struct BaseExtraList;
struct ExtraDataList;
class ExtraCount;
class Script;
struct ScriptEventList;
struct ScriptVar;
class BGSPrimitive;
class BGSPrimitivePlane;
class BGSPrimitiveBox;
class BGSPrimitiveSphere;
class BSTempEffect;
class MagicHitEffect;
class MagicShaderHitEffect;
class ActiveEffect;
struct PackageInfo;
struct ActorHitData;
struct CombatActors;
struct DetectionData;
struct DetectionEvent;
struct AnimData;
class BaseProcess;
class LowProcess;
class MiddleLowProcess;
class MiddleHighProcess;
class HighProcess;
class Tile;
class TileRect;
class TileMenu;
class TileImage;
class TileText;
class Tile3D;
class Menu;
class MessageMenu;
class InventoryMenu;
class StatsMenu;
class HUDMainMenu;
class LoadingMenu;
class ContainerMenu;
class DialogMenu;
class SleepWaitMenu;
class StartMenu;
class LockPickMenu;
class QuantityMenu;
class MapMenu;
class LevelUpMenu;
class RepairMenu;
class TextEditMenu;
class BarterMenu;
class HackingMenu;
class VATSMenu;
class ComputersMenu;
class RepairServicesMenu;
class ItemModMenu;
class CompanionWheelMenu;
class TraitSelectMenu;
class RecipeMenu;
class CaravanMenu;
class TraitMenu;
class RaceSexMenu;
class FORenderedMenu;
class FOPipboyManager;
struct FontInfo;
class ImageSpaceModifierInstance;
class ImageSpaceModifierInstanceForm;
class ImageSpaceModifierInstanceDOF;
class ImageSpaceModifierInstanceDRB;
class SkyObject;
class Atmosphere;
class Stars;
class Sun;
class Clouds;
class Moon;
class Precipitation;
class Sky;
class GridArray;
class GridCellArray;
class LoadedAreaBound;
class TES;
class FontManager;
struct ModInfo;
struct ParamInfo;
struct CommandInfo;
struct PluginInfo;
class BSFile;
class QueuedFile;
struct KFModel;
struct ModelLoader;
struct InventoryRef;
class AuxVariableValue;

class NiMemObject;
class NiRefObject;
class NiObject;
class NiInterpolator;
class NiTransformInterpolator;
class NiControllerSequence;
class NiTimeController;
class NiControllerManager;
class NiInterpController;
class NiTransformController;
class NiExtraData;
class NiObjectNET;
class NiProperty;
class NiAVObject;
class NiNode;
class BSFadeNode;
class BSMultiBoundNode;
class ShadowSceneNode;
class NiCamera;
class BSSceneGraph;
class SceneGraph;
class TESAnimGroup;
class BSAnimGroupSequence;
class NiTexture;
class NiSourceTexture;
class NiRenderedTexture;
class NiGeometry;
class NiTriBasedGeom;
class NiTriShape;
class NiTriStrips;
class BSScissorTriShape;
class BSSegmentedTriShape;
class BSResizableTriShape;
class BSFaceGenNiNode;
class BSShaderAccumulator;
class BSFaceGenAnimationData;

class hkReferencedObject;
class hkpWorldObject;
class bhkRefObject;
class hkpWorld;
class bhkWorld;
class bhkWorldM;
class NiCollisionObject;
class bhkNiCollisionObject;
class bhkBlendCollisionObject;
class bhkCharacterController;
class hkpRigidBody;
class bhkRigidBody;
class bhkRigidBodyT;
class bhkConstraint;
class bhkLimitedHingeConstraint;
class bhkRagdollController;
class bhkRagdollPenetrationUtil;
struct hkCdBody;

class BSWin32Audio;
struct Sound;
class DIHookControl;

#include "internal/class_vtbls.h"
#include "internal/memory_pool.h"
#include "internal/misc_consts.h"
#include "internal/utility.h"
#include "internal/containers.h"

#include "nvse/NiTypes.h"
#include "nvse/GameTypes.h"
#include "nvse/GameRTTI.h"
#include "nvse/CommandTable.h"
#include "nvse/GameBSExtraData.h"
#include "internal/netimmerse.h"
#include "internal/havok.h"
#include "nvse/PluginAPI.h"
#include "nvse/GameSound.h"
#include "nvse/GameData.h"
#include "nvse/GameForms.h"
#include "nvse/GameExtraData.h"
#include "nvse/GameObjects.h"
#include "nvse/GameScript.h"
#include "nvse/GameAPI.h"
#include "nvse/GameProcess.h"
#include "nvse/GameEffects.h"
#include "nvse/GameSettings.h"
#include "nvse/GameTasks.h"
#include "nvse/GameOSDepend.h"
#include "nvse/GameTiles.h"
#include "nvse/GameUI.h"